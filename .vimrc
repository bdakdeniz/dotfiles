set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
" call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'

" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.
" plugin on GitHub repo
Plugin 'tpope/vim-fugitive'
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'
Plugin 'powerline/fonts'
Plugin 'bling/vim-bufferline'
Plugin 'tpope/vim-repeat'
Plugin 'scrooloose/syntastic'
Plugin 'godlygeek/tabular'
Plugin 'terryma/vim-multiple-cursors'
Plugin 'mhinz/vim-signify'
Plugin 'scrooloose/nerdtree'
Plugin 'altercation/vim-colors-solarized'
Plugin 'flazz/vim-colorschemes'
Plugin 'scrooloose/nerdcommenter'

" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line

set guifont=Monospace\ 10

set conceallevel=0
let g:tex_conceal='adgms'

set guioptions-=T        " no gui toolbar. change to +=T to add it back
set history=1000         " remember more commands and search history
set undolevels=1000      " use many levels of undo
set wildignore=*.swp,*.bak,*.pyc,*.class
set title                " change the terminal's title
set novisualbell         " no annoying visual bell
set noerrorbells         " don't beep
set nocursorline
set nocursorcolumn
set wrap                 " Do wrap long lines
set autoindent           " Indent at the same level of the previous line
set shiftwidth=2         " Use indents of 2 spaces
set expandtab            " Tabs are spaces, not tabs
set tabstop=2            " An indentation every four columns
set softtabstop=2        " Let backspace delete indent
set nojoinspaces         " Prevents inserting two spaces after punctuation on a join
set splitright           " Puts new vsplit windows to the right of the current
set splitbelow           " Puts new split windows to the bottom of the current
set tw=80
set foldenable
set number                 " Show line number 
set mouse=a
set wildmode=longest,list  " Bashlike Tab completion

au FileType c,cpp setlocal expandtab shiftwidth=2 softtabstop=2
au BufNewFile,BufReadPost,FilterReadPost,FileReadPost  *.{C,cc,hh,sh} set nospell
au BufNewFile,BufReadPost,FilterReadPost,FileReadPost  .*rc set nospell
au BufNewFile,BufReadPost,FilterReadPost,FileReadPost  .*{b,u}*rc set syntax=sh

set lines=40 columns=90
set cindent
set cinoptions=(0,u0,U0

" get efficient shortcut mappings
nnoremap ; :

" use tab to auto indent whole file
map <Tab> gg=G``

" easier window navigation
nmap <C-h> <C-w>h
nmap <C-j> <C-w>j
nmap <C-k> <C-w>k
nmap <C-l> <C-w>l

" remap NERDTree {
silent! nmap <C-p> :NERDTreeToggle<CR>
silent! map <F3> :NERDTreeFind<CR>

let g:NERDTreeMapActivateNode="<F3>"
let g:NERDTreeMapPreview="<F4>"
"}

" ignore annoying error toggles in c++ files
let g:syntastic_mode_map = { 'passive_filetypes': ['cpp'] }

" set statusline {
if has('statusline')
  set laststatus=2

  " Broken down into easily includeable segments
  set statusline=%<%f\                     " Filename
  set statusline+=%w%h%m%r                 " Options
  set statusline+=%{fugitive#statusline()} " Git Hotness
  set statusline+=\ [%{&ff}/%Y]            " Filetype
  set statusline+=\ [%{getcwd()}]          " Current dir
  set statusline+=%=%-14.(%l,%c%V%)\ %p%%  " Right aligned file nav info
endif

" vim-airline {
let g:airline_powerline_fonts=1
let g:airline#extensions#tabline#enabled = 1 
let g:airline#extensions#tabline#left_sep = ' '
let g:airline#extensions#tabline#left_alt_sep = '|'
" don't count trailing whitespace since it lags in huge files
let g:airline#extensions#whitespace#enabled = 0
set t_Co=256

if isdirectory(expand("~/.vim/bundle/vim-airline-themes/"))
  if !exists('g:airline_theme')
    let g:airline_theme = 'molokai' "'solarized'
  endif
  if !exists('g:airline_powerline_fonts')
    " Use the default set of separators with a few customizations
    let g:airline_left_sep='›'  " Slightly fancier than '>'
    let g:airline_right_sep='‹' " Slightly fancier than '<'
  endif
endif
 if !exists('g:airline_symbols')
    let g:airline_symbols = {}
  endif

  " unicode symbols
  let g:airline_left_sep = '▶'
  let g:airline_right_sep = '◀'
  let g:airline_symbols.crypt = '🔒'
  let g:airline_symbols.linenr = '¶'
  let g:airline_symbols.maxlinenr = ''
  let g:airline_symbols.branch = '⎇'
  let g:airline_symbols.paste = 'ρ'
  let g:airline_symbols.spell = 'Ꞩ'
  let g:airline_symbols.notexists = '∄'
  let g:airline_symbols.whitespace = 'Ξ'
" }
"} end statusline

colorscheme molokai
