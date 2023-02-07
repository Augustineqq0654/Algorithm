set number relativenumber       "设置行号，相对行号
set ai  "自动换行
set tabstop=4	"设置制表为4
set expandtab   "用空格代替制表

inoremap jj <esc>

inoremap [ []<Esc>i
inoremap ] []<Esc>i
inoremap ( ()<Esc>i
inoremap ) ()<Esc>i
inoremap " ""<Esc>i
inoremap { {<CR>}<Esc>O
inoremap } {<CR>}<Esc>O

inoremap <C-L> <Esc>la
"inoremap <C-H> <Esc>ha
inoremap <C-J> <Esc>ja
inoremap <C-K> <Esc>ka

imap ,, <Esc>la
imap .. <Esc>2la
