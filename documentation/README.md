<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>THE ULTIMATE GUIDE</title><style>
/* cspell:disable-file */
/* webkit printing magic: print all background colors */
html {
	-webkit-print-color-adjust: exact;
}
* {
	box-sizing: border-box;
	-webkit-print-color-adjust: exact;
}

html,
body {
	margin: 0;
	padding: 0;
}
@media only screen {
	body {
		margin: 2em auto;
		max-width: 900px;
		color: rgb(55, 53, 47);
	}
}

body {
	line-height: 1.5;
	white-space: pre-wrap;
}

a,
a.visited {
	color: inherit;
	text-decoration: underline;
}

.pdf-relative-link-path {
	font-size: 80%;
	color: #444;
}

h1,
h2,
h3 {
	letter-spacing: -0.01em;
	line-height: 1.2;
	font-weight: 600;
	margin-bottom: 0;
}

.page-title {
	font-size: 2.5rem;
	font-weight: 700;
	margin-top: 0;
	margin-bottom: 0.75em;
}

h1 {
	font-size: 1.875rem;
	margin-top: 1.875rem;
}

h2 {
	font-size: 1.5rem;
	margin-top: 1.5rem;
}

h3 {
	font-size: 1.25rem;
	margin-top: 1.25rem;
}

.source {
	border: 1px solid #ddd;
	border-radius: 3px;
	padding: 1.5em;
	word-break: break-all;
}

.callout {
	border-radius: 3px;
	padding: 1rem;
}

figure {
	margin: 1.25em 0;
	page-break-inside: avoid;
}

figcaption {
	opacity: 0.5;
	font-size: 85%;
	margin-top: 0.5em;
}

mark {
	background-color: transparent;
}

.indented {
	padding-left: 1.5em;
}

hr {
	background: transparent;
	display: block;
	width: 100%;
	height: 1px;
	visibility: visible;
	border: none;
	border-bottom: 1px solid rgba(55, 53, 47, 0.09);
}

img {
	max-width: 100%;
}

@media only print {
	img {
		max-height: 100vh;
		object-fit: contain;
	}
}

@page {
	margin: 1in;
}

.collection-content {
	font-size: 0.875rem;
}

.column-list {
	display: flex;
	justify-content: space-between;
}

.column {
	padding: 0 1em;
}

.column:first-child {
	padding-left: 0;
}

.column:last-child {
	padding-right: 0;
}

.table_of_contents-item {
	display: block;
	font-size: 0.875rem;
	line-height: 1.3;
	padding: 0.125rem;
}

.table_of_contents-indent-1 {
	margin-left: 1.5rem;
}

.table_of_contents-indent-2 {
	margin-left: 3rem;
}

.table_of_contents-indent-3 {
	margin-left: 4.5rem;
}

.table_of_contents-link {
	text-decoration: none;
	opacity: 0.7;
	border-bottom: 1px solid rgba(55, 53, 47, 0.18);
}

table,
th,
td {
	border: 1px solid rgba(55, 53, 47, 0.09);
	border-collapse: collapse;
}

table {
	border-left: none;
	border-right: none;
}

th,
td {
	font-weight: normal;
	padding: 0.25em 0.5em;
	line-height: 1.5;
	min-height: 1.5em;
	text-align: left;
}

th {
	color: rgba(55, 53, 47, 0.6);
}

ol,
ul {
	margin: 0;
	margin-block-start: 0.6em;
	margin-block-end: 0.6em;
}

li > ol:first-child,
li > ul:first-child {
	margin-block-start: 0.6em;
}

ul > li {
	list-style: disc;
}

ul.to-do-list {
	text-indent: -1.7em;
}

ul.to-do-list > li {
	list-style: none;
}

.to-do-children-checked {
	text-decoration: line-through;
	opacity: 0.375;
}

ul.toggle > li {
	list-style: none;
}

ul {
	padding-inline-start: 1.7em;
}

ul > li {
	padding-left: 0.1em;
}

ol {
	padding-inline-start: 1.6em;
}

ol > li {
	padding-left: 0.2em;
}

.mono ol {
	padding-inline-start: 2em;
}

.mono ol > li {
	text-indent: -0.4em;
}

.toggle {
	padding-inline-start: 0em;
	list-style-type: none;
}

/* Indent toggle children */
.toggle > li > details {
	padding-left: 1.7em;
}

.toggle > li > details > summary {
	margin-left: -1.1em;
}

.selected-value {
	display: inline-block;
	padding: 0 0.5em;
	background: rgba(206, 205, 202, 0.5);
	border-radius: 3px;
	margin-right: 0.5em;
	margin-top: 0.3em;
	margin-bottom: 0.3em;
	white-space: nowrap;
}

.collection-title {
	display: inline-block;
	margin-right: 1em;
}

.simple-table {
	margin-top: 1em;
	font-size: 0.875rem;
	empty-cells: show;
}
.simple-table td {
	height: 29px;
	min-width: 120px;
}

.simple-table th {
	height: 29px;
	min-width: 120px;
}

.simple-table-header-color {
	background: rgb(247, 246, 243);
	color: black;
}
.simple-table-header {
	font-weight: 500;
}

time {
	opacity: 0.5;
}

.icon {
	display: inline-block;
	max-width: 1.2em;
	max-height: 1.2em;
	text-decoration: none;
	vertical-align: text-bottom;
	margin-right: 0.5em;
}

img.icon {
	border-radius: 3px;
}

.user-icon {
	width: 1.5em;
	height: 1.5em;
	border-radius: 100%;
	margin-right: 0.5rem;
}

.user-icon-inner {
	font-size: 0.8em;
}

.text-icon {
	border: 1px solid #000;
	text-align: center;
}

.page-cover-image {
	display: block;
	object-fit: cover;
	width: 100%;
	max-height: 30vh;
}

.page-header-icon {
	font-size: 3rem;
	margin-bottom: 1rem;
}

.page-header-icon-with-cover {
	margin-top: -0.72em;
	margin-left: 0.07em;
}

.page-header-icon img {
	border-radius: 3px;
}

.link-to-page {
	margin: 1em 0;
	padding: 0;
	border: none;
	font-weight: 500;
}

p > .user {
	opacity: 0.5;
}

td > .user,
td > time {
	white-space: nowrap;
}

input[type="checkbox"] {
	transform: scale(1.5);
	margin-right: 0.6em;
	vertical-align: middle;
}

p {
	margin-top: 0.5em;
	margin-bottom: 0.5em;
}

.image {
	border: none;
	margin: 1.5em 0;
	padding: 0;
	border-radius: 0;
	text-align: center;
}

.code,
code {
	background: rgba(135, 131, 120, 0.15);
	border-radius: 3px;
	padding: 0.2em 0.4em;
	border-radius: 3px;
	font-size: 85%;
	tab-size: 2;
}

code {
	color: #eb5757;
}

.code {
	padding: 1.5em 1em;
}

.code-wrap {
	white-space: pre-wrap;
	word-break: break-all;
}

.code > code {
	background: none;
	padding: 0;
	font-size: 100%;
	color: inherit;
}

blockquote {
	font-size: 1.25em;
	margin: 1em 0;
	padding-left: 1em;
	border-left: 3px solid rgb(55, 53, 47);
}

.bookmark {
	text-decoration: none;
	max-height: 8em;
	padding: 0;
	display: flex;
	width: 100%;
	align-items: stretch;
}

.bookmark-title {
	font-size: 0.85em;
	overflow: hidden;
	text-overflow: ellipsis;
	height: 1.75em;
	white-space: nowrap;
}

.bookmark-text {
	display: flex;
	flex-direction: column;
}

.bookmark-info {
	flex: 4 1 180px;
	padding: 12px 14px 14px;
	display: flex;
	flex-direction: column;
	justify-content: space-between;
}

.bookmark-image {
	width: 33%;
	flex: 1 1 180px;
	display: block;
	position: relative;
	object-fit: cover;
	border-radius: 1px;
}

.bookmark-description {
	color: rgba(55, 53, 47, 0.6);
	font-size: 0.75em;
	overflow: hidden;
	max-height: 4.5em;
	word-break: break-word;
}

.bookmark-href {
	font-size: 0.75em;
	margin-top: 0.25em;
}

.sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; }
.code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; }
.serif { font-family: Lyon-Text, Georgia, ui-serif, serif; }
.mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; }
.pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; }
.pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; }
.pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; }
.pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; }
.pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; }
.pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; }
.pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; }
.pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; }
.pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.highlight-default {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.highlight-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.highlight-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.highlight-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.highlight-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.highlight-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.highlight-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.highlight-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.highlight-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.highlight-gray_background {
	background: rgba(241, 241, 239, 1);
}
.highlight-brown_background {
	background: rgba(244, 238, 238, 1);
}
.highlight-orange_background {
	background: rgba(251, 236, 221, 1);
}
.highlight-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.highlight-teal_background {
	background: rgba(237, 243, 236, 1);
}
.highlight-blue_background {
	background: rgba(231, 243, 248, 1);
}
.highlight-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.highlight-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.highlight-red_background {
	background: rgba(253, 235, 236, 1);
}
.block-color-default {
	color: inherit;
	fill: inherit;
}
.block-color-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.block-color-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.block-color-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.block-color-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.block-color-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.block-color-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.block-color-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.block-color-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.block-color-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.block-color-gray_background {
	background: rgba(241, 241, 239, 1);
}
.block-color-brown_background {
	background: rgba(244, 238, 238, 1);
}
.block-color-orange_background {
	background: rgba(251, 236, 221, 1);
}
.block-color-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.block-color-teal_background {
	background: rgba(237, 243, 236, 1);
}
.block-color-blue_background {
	background: rgba(231, 243, 248, 1);
}
.block-color-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.block-color-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.block-color-red_background {
	background: rgba(253, 235, 236, 1);
}
.select-value-color-pink { background-color: rgba(245, 224, 233, 1); }
.select-value-color-purple { background-color: rgba(232, 222, 238, 1); }
.select-value-color-green { background-color: rgba(219, 237, 219, 1); }
.select-value-color-gray { background-color: rgba(227, 226, 224, 1); }
.select-value-color-opaquegray { background-color: rgba(255, 255, 255, 0.0375); }
.select-value-color-orange { background-color: rgba(250, 222, 201, 1); }
.select-value-color-brown { background-color: rgba(238, 224, 218, 1); }
.select-value-color-red { background-color: rgba(255, 226, 221, 1); }
.select-value-color-yellow { background-color: rgba(253, 236, 200, 1); }
.select-value-color-blue { background-color: rgba(211, 229, 239, 1); }

.checkbox {
	display: inline-flex;
	vertical-align: text-bottom;
	width: 16;
	height: 16;
	background-size: 16px;
	margin-left: 2px;
	margin-right: 5px;
}

.checkbox-on {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E");
}

.checkbox-off {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E");
}
	
</style></head><body><article id="e7f20768-3775-4440-9ca8-d036b1ab9b7f" class="page sans"><header><div class="page-header-icon undefined"><span class="icon">📖</span></div><h1 class="page-title">THE ULTIMATE GUIDE</h1></header><div class="page-body"><h2 id="8713e342-ac20-4176-afbf-817a90fa89c4" class=""><mark class="highlight-purple_background">let’s talk about some essential concepts before diving into the actual implementation of containers : </mark></h2><h1 id="9ba6fe87-bcef-486f-be27-e092ccdd740b" class=""><mark class="highlight-red">1 -</mark> <mark class="highlight-red">exception safety and RAII</mark></h1><ul id="9fbc339c-5d96-4d19-b29b-b2f0bc7e038f" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><ul id="c3d0acb7-5701-4150-ae7d-3f87d9aeb180" class="bulleted-list"><li style="list-style-type:disc"><a href="https://en.wikipedia.org/wiki/Call_stack#Unwinding">https://en.wikipedia.org/wiki/Call_stack#Unwinding</a></li></ul><ul id="f9050951-9121-48cc-bf7c-80278f829abf" class="bulleted-list"><li style="list-style-type:disc"><a href="https://scvgoe.github.io/2019-07-06-Exception-Safety/">https://scvgoe.github.io/2019-07-06-Exception-Safety/</a></li></ul><ul id="dae76c37-1bc3-4c55-959e-1df1122c9c08" class="bulleted-list"><li style="list-style-type:disc"><a href="https://www.boost.org/community/exception_safety.html">https://www.boost.org/community/exception_safety.html</a></li></ul></details></li></ul><h3 id="fc91c058-31e6-4a25-b217-94366728f5e3" class="">so what is exception safety?</h3><p id="304354bb-29c3-4bb2-8101-c7b08b8d8afe" class="">before I answer that I should first introduce to you an important concept which is stack unwinding</p><h3 id="f9b16a5c-5125-4471-8b15-606a20904d16" class=""><mark class="highlight-orange">stack unwinding :</mark></h3><blockquote id="9ce99760-4874-489e-9f1f-21dcf271af19" class="">when a function is called, information about that routine gets stacked up on <strong>the call stack inside a frame. Each function(subroutine) gets its own frame with whatever information instruction needs the CPU to execute that function.</strong></blockquote><blockquote id="8f54ecaa-f620-487a-b3ef-44aa7a8e10f5" class="">now when the function finishes its execution, its frame gets destroyed and the CPU executes the next function in a FILO order </blockquote><div id="e9e5d032-5099-420e-bb9c-39812fe6600b" class="column-list"><div id="872e9959-961e-43f0-b3aa-41592e8b9275" style="width:43.75%" class="column"><blockquote id="cbeb43fc-4e6b-4b33-a997-791a07f4d1a9" class="">When an exception occurs while a function is in progress on the stack, it returns to the call stack by finding the catch block, it just keeps returning through the execution path. resulting in the destruction of the function frame.</blockquote><blockquote id="c5d579b6-7ad1-4ac0-a5a2-8316cb8eecaf" class="block-color-gray_background">if there is any <mark class="highlight-red">memory allocated</mark> before the exception throw, <mark class="highlight-red">memory leaks</mark> will occur </blockquote><p id="9721b3f4-31b0-4e4c-9f1a-bf92acd09b2c" class="">
</p></div><div id="6e21c825-e5ea-45c2-81c4-4396fa6cf83c" style="width:56.25%" class="column"><figure id="7abbce2d-ef06-4e14-9652-9d0e0d4702ac" class="image" style="text-align:center"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/exception.jpeg"><img style="width:700px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/exception.jpeg"/></a></figure><p id="9faf1f54-e875-4be7-be43-896d1aabf3d3" class="">
</p><p id="3d53053b-8de8-416c-9a38-2b77d6940a2d" class="">
</p></div></div><figure id="87896c31-e63c-4f0e-a1ed-8428dd4aa1dc" class="image"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-26_at_9.17.17_AM.png"><img style="width:528px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-26_at_9.17.17_AM.png"/></a></figure><p id="2dfeaedd-ee94-473e-822e-7488cfae448e" class="">
</p><pre id="62fc7236-f74c-41b8-9d42-6bd694bf6d34" class="code code-wrap"><code>void f3() {
	int *c = new int[100]; // will be leak
	std::string s = &quot;this is stack... would be destroyed&quot;;
	throw &quot;exception!&quot;;
}

void f2() { f3() }

void f1() { try { f2() } catch (...) { std::cout &lt;&lt; &quot;back to here!\n&quot;; } }</code></pre><p id="09e0eca3-af34-44a3-a9a5-6cb0a0bd90bb" class="">• <code>f1-&gt;f2-&gt;f3</code>Stacks are stacked in <code>f3-&gt;f2-&gt;f1</code>order, and stacks are released in order.</p><ul id="e06ef3e6-6b7e-40be-a58d-5086772e4c42" class="bulleted-list"><li style="list-style-type:disc">the exception will follow that execution path until it finds the catch block,  <p id="ea56a255-32a8-477c-ae06-1423c9a57c18" class=""> destroying function frames without giving a damn about allocated memory </p><p id="a06f493a-e305-42c5-82f3-f23a163ddd8a" class="">
</p><h2 id="25b89630-ab30-45fb-bf94-77a38320faa5" class=""><mark class="highlight-purple"><strong><strong>Levels of exception safety :</strong></strong></mark></h2><p id="25d958ee-2f6f-4b03-b2cc-2572b9e29b9a" class="">now that we know what exception safety is let us discover the levels of exception safety</p><p id="6638405d-d2e2-4398-bdd5-b02304410227" class="">and at what level our code should be exception safe</p><p id="5d6933d6-21d8-483f-ba88-4162ae852916" class="">Exception safety has four levels. (sort by safe order)</p><ol type="1" id="69c813cc-7e0c-4814-b6a6-b3a0307964fc" class="numbered-list" start="1"><li><mark class="highlight-gray_background"><strong>No-throw guarantee</strong></mark><p id="644242bc-e59f-4d0d-8c14-679d2f308783" class="">(failure transparency): At a level that guarantees the success and safety of all operations, when an exceptional situation occurs, it is handled internally, and success and stability are guaranteed without being visible to clients.</p></li></ol><ol type="1" id="91b3d352-3b62-44d6-a045-41d24b8bdbb7" class="numbered-list" start="2"><li><mark class="highlight-gray_background"><strong>Strong exception safety</strong></mark><p id="5e884bf8-9ed0-4d14-ae95-c277d7ebcb9c" class="">(commit or rollback semantics): The operation may fail, but it is guaranteed that the failed operation does not cause other side effects. Therefore, all data retains its original values.</p></li></ol><ol type="1" id="e3f4d68f-ae79-4045-8b3d-b7c29af49271" class="numbered-list" start="3"><li><mark class="highlight-gray_background"><strong>Basic exception safety</strong></mark><p id="6d6b733f-8819-41e6-ab1d-9285432c1325" class="">(no-leak guarantee): Although some actions of a failed operation can cause side effects, all invariants are always preserved and no resource leaks including memory leaks are guaranteed. The existing data stored may change its value, but it will still have a valid value.</p></li></ol><ol type="1" id="e70a351b-8286-4bb1-a11b-d10ce48fa15a" class="numbered-list" start="4"><li><mark class="highlight-gray_background"><strong>No exception safety</strong></mark><p id="3b352c57-97ef-42ee-8958-b73fffc7bcad" class="">: a level in which nothing is guaranteed. In general, a level of at least basic exception safety is required for a robust code. A high level of safety is difficult to achieve and may incur overhead due to additional copies. The key to exception safety is to ensure that program execution continues even after a block of code (even if it is an exception) is executed. Some languages make this simple by using the dispose pattern (with, try-with-resources).</p><p id="3b6a4d53-562e-42af-8868-4d975da1f288" class="">
</p></li></ol><p id="f416a238-964b-42b6-9552-98165df06811" class="">
</p><h1 id="e2ee9c9d-e74d-4e03-b0a0-8ddd4907c9d4" class=""><mark class="highlight-brown_background"><strong>How to: Design for Exception Safety In C++</strong></mark></h1><ol type="1" id="8ac8b989-1e18-4af7-a9ef-19f1c007145b" class="numbered-list" start="1"><li><mark class="highlight-brown"><strong>Keep Resource Classes Simple</strong></mark><p id="09fbb8cd-8b6f-464d-9cd6-60eefefd5d43" class="">: When encapsulating a manual resource in a class, you should do nothing but manage the resource. Also, it is better to use a smart pointer if possible.</p></li></ol><ol type="1" id="3c799bd1-a27d-4179-a49b-e7314805483a" class="numbered-list" start="2"><li><mark class="highlight-brown"><strong>Use the RAII Idiom to Manage Resources</strong></mark><p id="099cf629-87c4-4873-90e5-25263d36f445" class="">: RAII (Resource Acquisition Is Initialization) Idiom is a design pattern proposed by Bjarne Stroustrup, the creator of C++. The RAII pattern is an important technique to prevent leaks in languages such as C++ where the developer needs to directly manage the resource. It releases the resource automatically when the scope of use of the resource ends, and the resource is acquired even when an exception occurs. It must be ensured that this</p></li></ol></li></ul><p id="a53701bb-643b-46da-8e13-68197b5645c1" class=""><div class="indented"><h2 id="f9a4f0a0-3c72-4ae3-abd0-f27b2f78e520" class=""><mark class="highlight-purple_background"><strong><strong>RAII (Resource Acquisition Is Initialization)</strong></strong></mark></h2><ul id="0c14d5b0-e020-4ec5-9e14-cea887e43f4d" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="641b6568-bfb9-41bf-a817-8648e31b352e" class=""><a href="https://www.stroustrup.com/3rd_safe.pdf">https://www.stroustrup.com/3rd_safe.pdf</a></p><p id="ce8cc632-55f9-4f7c-b49c-f2af69fc47fc" class=""><a href="https://occamsrazr.net/tt/297">https://occamsrazr.net/tt/297</a></p><p id="5afd0ff1-ca33-46e1-ad51-94eba5cdfca5" class=""><a href="https://en.cppreference.com/w/cpp/language/raii">https://en.cppreference.com/w/cpp/language/raii</a></p></details></li></ul></div></p><p id="92f7ad9a-174f-4426-813e-4231aa74465b" class=""><strong><strong>Resource Acquisition is Initialization is a c++ technique that ensures that the allocated resources will be released </strong></strong></p><p id="6d8f25c6-7f5d-4cc8-9b6b-94eeef0e752a" class="">it consists of creating an object that will encapsulate and manage the resource <mark class="highlight-purple_background"><strong><strong>Acquisition/allocation</strong></strong></mark> in the <mark class="highlight-blue">constructor. </mark><strong><strong> </strong></strong>and release that resource in the <mark class="highlight-pink">destructor. </mark></p><p id="561cf023-82fa-4906-85fb-9dd0fbc85bfe" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="a9ef47aa-b3a4-4e2b-b45d-be387ff900a5"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">when we talk about resources it can be allocated heap memory, a thread of execution, an open socket, an open file, locked mutex, …</div></figure><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="75d048c2-275a-4263-b50f-c8037b30309a"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Another name for this technique is <em>Scope-Bound Resource Management</em>
 (SBRM),</div></figure><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="c6c64770-7f3c-4191-993e-5208f90fa598"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">the standard library offers several RAII wrappers to manage user-provided resources:<ul id="34b43034-540d-4738-ba12-2af31ab68421" class="bulleted-list"><li style="list-style-type:disc"><a href="https://en.cppreference.com/w/cpp/memory/unique_ptr">std::unique_ptr</a> and <a href="https://en.cppreference.com/w/cpp/memory/shared_ptr">std::shared_ptr</a> to manage dynamically-allocated memory …</li></ul></div></figure><p id="c8bd3259-b92e-4e8d-a529-4d9b55662b1f" class="">
</p><p id="406c7b09-0bcd-4894-b6e7-20d029198681" class="">
</p><h2 id="dff56562-8ced-4eb4-a6dd-7c16e04b7cae" class=""><mark class="highlight-teal"> -</mark> <mark class="highlight-teal">Functors  (Function Objects):</mark></h2><ul id="2b57f4ac-a23e-4ab8-8527-ba42caad981b" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="cb5d1c93-b787-451d-9e46-f84c2158942e" class=""><a href="https://docs.microsoft.com/en-us/cpp/cpp/lambda-expression-syntax?view=msvc-170">MS functor vs lambda expression</a></p><p id="2d2253b3-9894-4b49-a675-1c4c38cc70be" class=""><a href="https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses">what are c++ functors and their uses (StackOverflow 따봉 1000개)</a></p><p id="2f40bc41-d2ba-4b0f-8654-f44ba0b1263a" class=""><a href="https://www.bogotobogo.com/cplusplus/functors.php">about functor</a></p><p id="a83ef440-7712-4ae7-bf80-2f86aee025e5" class=""><a href="https://en.wikipedia.org/wiki/Function_object">function object Wikipedia</a></p></details></li></ul><p id="d1e69d72-29ce-44c8-91e3-4eb06d678205" class="">
</p><ul id="0227f1eb-209c-43bf-9bb3-acc6560e1dd8" class="bulleted-list"><li style="list-style-type:disc">As the name shows, Functor is a combination of a function and an object. </li></ul><ul id="a5b98ce0-da38-454a-a569-5070309c6892" class="bulleted-list"><li style="list-style-type:disc">it&#x27;s an object that behaves like a function. and that’s by overloading the () operator </li></ul><ul id="3574e890-a863-45dd-b417-00de297c7dc4" class="bulleted-list"><li style="list-style-type:disc">functors are widely used in STL algorithms</li></ul><pre id="e4afc0f4-4295-4395-8720-72ec45adb09e" class="code"><code>struct Add{
	Add(int toAdd) : _toAdd(toAdd) {}
	int operator()(int x){
		return x + _toAdd;
	}
	private:
	int _toAdd;
};

int main(){
	Add add_42(42); // state
	Add add_13(13);
	int result_42 = add_42(2);
	int result_13 = add_13(2);
	std::vector&lt;int&gt; v(10, 10);
	std::transform(v.begin(), v.end(), v.begin(), add_42);
}</code></pre><p id="ffb95f38-addd-48e6-a316-5bf259375c7e" class="">
</p><h3 id="6cb8641f-4296-4147-949a-b620f531a934" class=""><strong>Classification of functors</strong></h3><ul id="d7d32ba4-9676-4326-8e4c-c4e88e187673" class="bulleted-list"><li style="list-style-type:disc">generator: a functor with no arguments</li></ul><ul id="1344150f-1e0b-436e-99ea-0fa7316dd86b" class="bulleted-list"><li style="list-style-type:disc">unary: a functor that takes one argument</li></ul><ul id="6cff435a-bf23-47f4-b486-b978fb22a361" class="bulleted-list"><li style="list-style-type:disc">binary: a functor that takes two arguments</li></ul><ul id="ba0b10ef-bac0-4406-a453-8446cbdedca2" class="bulleted-list"><li style="list-style-type:disc">predicate: Used as a functor that returns a boolean value, Unary predicate, Binary predicate, etc.</li></ul><ul id="451a9567-e8a2-43f7-a085-5ecfea8d1068" class="bulleted-list"><li style="list-style-type:disc">operator: a functor that returns an operation value</li></ul><h3 id="9979b696-369e-401a-9405-ccf2606d2fa0" class=""><strong>functor vs function</strong></h3><ul id="6e62afb6-64ad-4d7e-b4d7-5a361955191e" class="bulleted-list"><li style="list-style-type:disc">A functor is an object that operates like a function by overloading the () operator on the object.<ul id="c4c4e0f6-0045-4a59-aedc-d59fa108ec2d" class="bulleted-list"><li style="list-style-type:circle">Because it is an object, it can be passed as an argument and can be used in the form of a callback.</li></ul></li></ul><ul id="2e8165a7-181f-4648-a579-94450977244b" class="bulleted-list"><li style="list-style-type:disc">Because it is a callback type, it is compatible with STL&#x27;s algorithm.</li></ul><ul id="6f92c029-1a98-4062-bc93-4a0a791fc988" class="bulleted-list"><li style="list-style-type:disc">the state can be stored</li></ul><ul id="40a899c0-1005-4747-851e-39fdbb5c508a" class="bulleted-list"><li style="list-style-type:disc">To pass a function as an argument to a specific function, you need to do something else (function pointer or function object).</li></ul><h3 id="382c9084-4c6b-4ae3-b783-b88ca566045f" class=""><strong>functor vs function pointer</strong></h3><ul id="8e17ede9-b6bd-43c5-8bcc-1f5e87f05206" class="bulleted-list"><li style="list-style-type:disc">A functor has a clearly defined type.<ul id="5282eef1-a96c-4162-b3f0-5f25ba0cb569" class="bulleted-list"><li style="list-style-type:circle">Therefore, it can also be used as a template argument.</li></ul><ul id="f0e91a4f-bb2a-4985-9c2e-4255e016bb2c" class="bulleted-list"><li style="list-style-type:circle">Optimization is possible in the compilation stage, so it can be inlined.</li></ul><ul id="8b8143ac-fc2b-4fe7-a09a-4fa4b5378973" class="bulleted-list"><li style="list-style-type:circle">It can store state and can also have regular member variables/functions.</li></ul><ul id="5cc26d19-c41e-4228-942a-6aa5d0e76040" class="bulleted-list"><li style="list-style-type:circle">A large amount of code is required to create a structure or class.</li></ul></li></ul><ul id="aa80a76d-b44d-421c-aa79-37d01ab1d1bc" class="bulleted-list"><li style="list-style-type:disc">A function pointer can contain other functions as long as the type is the same.<ul id="f12cd17c-8880-4ae2-a2fc-668df13b308a" class="bulleted-list"><li style="list-style-type:circle">It is not determined at compile time, but the function is determined at runtime, so overhead occurs and cannot be inlined.</li></ul><ul id="8f77e015-9323-41a7-8f4a-fa34638ad02c" class="bulleted-list"><li style="list-style-type:circle">The state cannot be saved.</li></ul></li></ul><h3 id="58382242-b3dd-483d-b173-64c077eff99e" class=""><strong>function vs lambda expression (c++11)</strong></h3><p id="15c57706-55cb-459c-bcc5-3113793c85b7" class="">Both can be inlined and lambda expression defaults to inline.</p><ul id="54ee25d4-6236-4a95-a5d3-81daa2d8444b" class="bulleted-list"><li style="list-style-type:disc">A lambda expression is similar to a functor, but it is simpler because there is no need to define a class. Feels like syntax sugar</li></ul><p id="1d96ff02-0d84-477e-8fbd-12012999f93d" class="">
</p><h1 id="25c79558-9c9c-4e3e-9b05-9c6af0b5853e" class=""><mark class="highlight-red">2- SFINAE  </mark></h1><h2 id="6db2c4f9-608e-4409-aa80-87d7e8bc5ed4" class=""><mark class="highlight-blue">- SFINAE (</mark><mark class="highlight-blue"><strong><strong>Substitution Failure Is Not An Error</strong></strong></mark><mark class="highlight-blue">)</mark></h2><ul id="ff1dbd09-61a9-4da6-b7ab-a239d9bd39fe" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="f4ee2a45-606e-45b2-a9b5-57a67db81c3a" class=""><a href="https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#:~:text=Substitution%20failure%20is%20not%20an%20error%20(SFINAE)%20refers%20to%20a,to%20describe%20related%20programming%20techniques">https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#:~:text=Substitution failure is not an error (SFINAE) refers to a,to describe related programming techniques</a>.</p></details></li></ul><p id="26c4a698-6395-49ca-ba5c-2cde4aeb1994" class="">before we define what SFINAE really is, let&#x27;s first see how the compiler chooses the right function overload to call.  <div class="indented"><p id="417ab7b3-5500-4430-8255-6d1ea5800d00" class="">in c++, the compiler goes through a process in order for it to find the right function overload.</p><p id="1dbddfd3-e841-4c4a-aa25-ee95725ca847" class="">these steps are:</p><ul id="8f31799f-6814-4004-a1d7-6e441d05fc82" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">1 </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/lookup">name lookup</a></mark><p id="e68f4001-42da-4500-8019-84e022346ae8" class="">in this step, the compiler looks for candidate functions that have the same name</p><p id="ddf821d1-847c-4f33-b917-386377af5e40" class="">this step consists of two different types of lookup :<div class="indented"><ul id="55ae1c37-955e-440f-a5bd-e9021b4cde0a" class="bulleted-list"><li style="list-style-type:disc">• <a href="https://en.cppreference.com/w/cpp/language/unqualified_lookup">unqualified name lookup</a>: to put it simply, in this type of lookup, there’s a search for the namespace, if there’s one, otherwise we check in the global namespace;</li></ul><ul id="f2698fa4-c103-4c5d-8c11-d3b18824d086" class="bulleted-list"><li style="list-style-type:disc">• <a href="https://en.cppreference.com/w/cpp/language/qualified_lookup">qualified name lookup</a>: in this type of lookup, we search more specifically for the function name in the namespace that we found in the <mark class="highlight-gray_background">unqualified name lookup </mark></li></ul></div></p></li></ul><ul id="1c38dfcd-b496-4dc5-8d58-e9e6893a7525" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">2 • </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/adl">ADL (Argument Dependent Lookup)</a></mark><mark class="highlight-brown"> :</mark><ul id="23de5267-807d-4397-a8cf-7b1d2a8e8e1f" class="bulleted-list"><li style="list-style-type:circle">ADL is the set of rules for looking up the unqualified function names in <a href="https://en.cppreference.com/w/cpp/language/operator_other">function-call expressions</a>, including implicit function, calls to <a href="https://en.cppreference.com/w/cpp/language/operators">overloaded operators</a>.<ul id="8c47fe2b-bdb3-459b-a05c-79a87eb1a9bb" class="toggle"><li><details open=""><summary>the argument-dependent lookup is not considered if the lookup set produced by the usual <a href="https://en.cppreference.com/w/cpp/language/lookup">unqualified lookup</a> contains any of the following:</summary><p id="380811d2-b43b-4329-a0e5-dcba504be72c" class="">1) a declaration of a class member</p><p id="5627c68b-8158-407e-817c-e94a17c51d2e" class="">2) a declaration of a function at block scope (that&#x27;s not a <a href="https://en.cppreference.com/w/cpp/language/namespace#Using-declarations">using-declaration</a>)</p><p id="5da2eb31-e91e-44ea-b172-8c2dd4516bcf" class="">3) any declaration that is not a function or a function template (e.g. a function object or another variable whose name conflicts with the name of the function that&#x27;s being looked up)</p></details></li></ul><ul id="270e34ff-4e6d-4361-ab92-5ebcda5da7bf" class="toggle"><li><details open=""><summary>for every argument in a function call expression, its type is examined to determine the <em>associated set of namespaces and classes</em> that it will add to the lookup.</summary><ol type="1" id="181228c7-b266-4e22-bc4d-c6ba40c409fd" class="numbered-list" start="1"><li>For arguments of fundamental type, the associated set of namespaces and classes is empty</li></ol><ol type="1" id="0b60416d-9670-4152-8744-7ef8fffabac8" class="numbered-list" start="2"><li>For arguments of class type (including union) … </li></ol><ol type="1" id="6004d0b1-8708-4b8e-8f94-1651c47fe928" class="numbered-list" start="3"><li>For arguments whose type is a <a href="https://en.cppreference.com/w/cpp/language/class_template">class template</a> specialization …</li></ol><ol type="1" id="67cba4bf-dcba-46b2-a3f4-696683d18ddb" class="numbered-list" start="4"><li>For arguments of enumeration type … </li></ol><ol type="1" id="30ee0e98-bbf1-43e1-a0a5-f66f1e9e3029" class="numbered-list" start="5"><li>For arguments of type pointer to T or pointer to an array of T …</li></ol><ol type="1" id="7a35ab77-0502-44c6-9ef7-bcf02cce5904" class="numbered-list" start="6"><li>For arguments of function type, the function parameter types and the function return type are examined and their associated set of classes and namespaces are added to the set.</li></ol><ol type="1" id="60d8c229-e1a3-46c1-84af-df2f57cfee65" class="numbered-list" start="7"><li>For arguments of type pointer to member function F of class X …</li></ol><ol type="1" id="478b8169-f1f8-4e3c-937f-21bb7f017c39" class="numbered-list" start="8"><li>For arguments of type pointer to data member T of class X …</li></ol><ol type="1" id="8abb7a88-ae9d-4f19-b145-e9f0072c6be3" class="numbered-list" start="9"><li>….</li></ol><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="be26149c-425d-49c0-9f77-3978f903063a"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%"><mark class="highlight-yellow_background">read more here : </mark><a href="https://en.cppreference.com/w/cpp/language/adl">https://en.cppreference.com/w/cpp/language/adl</a></div></figure><p id="95031beb-da31-4701-b05b-ed169c233b22" class="">
</p></details></li></ul></li></ul></li></ul></div></p><ul id="075d1395-d429-40a3-916e-787689943b23" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">3  </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/template_argument_deduction">template argument deduction</a></mark><p id="10495fb1-9edf-447a-b4ab-021f45774764" class=""> - at this point,  Template functions are untyped and need to be instantiated.</p><p id="b8e87ce8-7636-437a-98cb-673596bb1792" class=""> - A template function is instantiated, either explicitly or implicitly, but not always all arguments of the template are determined.</p><p id="28cba8ff-ff92-4e16-b7da-1f5f459902aa" class=""> - At this point, if possible, the compiler deduces the template argument.</p><p id="2911e313-3d80-4e64-b0f8-39f5a4b78199" class=""> - In this way, a candidate function set is created, and more than one function can be a candidate.</p></li></ul><p id="396c8473-3fd6-47e3-acef-79809d135b3a" class=""><mark class="highlight-brown">4 • </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution">template argument substitution</a></mark></p><ul id="83e06f74-f301-481d-a7b7-e47575596c7d" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown"> </mark>7 - Substitute function arguments in the list, but if there is a problem with the type or expression, the substitution fails</li></ul><ul id="72a6fdf6-3573-47ef-987e-cf32b411762c" class="bulleted-list"><li style="list-style-type:disc">8 - <strong>When substitution fails, it does not generate a compile error and works by excluding the candidate function from the candidate group! (</strong><mark class="highlight-pink"><strong>SFINAE</strong></mark><strong>)</strong></li></ul><ul id="ecf69a99-e6b6-4674-9053-aed30c141735" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">5 - </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/overload_resolution">overload resolution</a></mark><ul id="03b0f2b1-082b-44b2-9d59-f8d2068868de" class="bulleted-list"><li style="list-style-type:circle"> Find the function actually called through overload resolution!</li></ul></li></ul><p id="98e0255b-0d06-4e7f-b254-13fa1caf6aa2" class="">
</p><ul id="8f11c90a-abc4-401d-ae69-54983fe1b0af" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-teal">  At this time, the function candidates are </mark><mark class="highlight-teal"><code>candidate functions </code></mark><mark class="highlight-teal">called, and the function actually called </mark><mark class="highlight-teal"><code>viable function </code></mark><mark class="highlight-teal">is called!</mark></li></ul><p id="b2382510-df96-4097-9892-998ccd1da09e" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="849632f3-355c-41ae-84c4-d6f3163bf716"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%"><mark class="highlight-red">SFINAE</mark> applies during overload resolution of function templates: When <a href="https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution">substituting</a>
 the explicitly specified or <a href="https://en.cppreference.com/w/cpp/language/template_argument_deduction">deduced type</a> for the template parameter fails, the specialization is discarded from the <a href="https://en.cppreference.com/w/cpp/language/overload_resolution">overload set</a>, instead of causing a compile error.</div></figure><p id="b163a04b-fa7b-4a67-8fb0-be7b29250d06" class=""><div class="indented"><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="8dfd6693-c0aa-48a8-9da8-5d4284cf7aee"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%"><strong>Substitution failure is not an error</strong> (<strong>SFINAE</strong>) refers to a situation in <a href="https://en.wikipedia.org/wiki/C%2B%2B">C++</a> where an invalid substitution of <a href="https://en.wikipedia.org/wiki/Template_(C%2B%2B)">template</a> parameters is not in itself an error. David Vandevoorde first introduced the acronym SFINAE to describe related programming techniques.<a href="https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-1">[1]</a><p id="a7764c5d-71ef-456a-b33b-75fc62c7e0a3" class="">Specifically, when creating a candidate set for <a href="https://en.wikipedia.org/wiki/Overload_resolution">overload resolution</a>, some (or all) candidates of that set may be the result of instantiated templates with (potentially deduced) template arguments substituted for the corresponding template parameters. If an error occurs during the substitution of a set of arguments for any given template, the compiler removes the potential overload from the candidate set instead of stopping with a compilation error, provided the substitution error is one the C++ standard grants such treatment.<a href="https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-2">[2]</a> If one or more candidates remain and overload resolution succeeds, the invocation is well-formed.</p></div></figure></div></p><p id="3f7c8446-186d-45e8-9d64-ac62b9402acc" class="">
</p><blockquote id="4ad474f9-d016-4c2b-aefc-4a3d574731ba" class=""><mark class="highlight-pink">in the next section, we will see how we can use SFINAE to our advantage, through type traits, and tag dispatching ….</mark></blockquote><p id="e6324026-4018-419d-999b-31e0a4d40585" class="">
</p><h1 id="0aef42bc-d3fc-42bd-b798-456d65780e5c" class=""><mark class="highlight-red">3- Type Traits / Tag dispatching …</mark></h1><p id="b8c29432-c577-4e5f-bd61-a5fe6826d77c" class=""><div class="indented"><h2 id="13bfbc55-4afa-41f7-aaec-b2e378f74db0" class=""><mark class="highlight-blue">Type Traits :</mark></h2><ul id="b8aa6306-2c09-4094-8b42-fdf41b009859" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><figure id="d76e1d8f-e129-486e-b8b5-2dfa7d7585b2"><a href="https://www.internalpointers.com/post/quick-primer-type-traits-modern-cpp" class="bookmark source"><div class="bookmark-info"><div class="bookmark-text"><div class="bookmark-title">A quick primer on type traits in modern C++</div><div class="bookmark-description">Type traits are a clever technique used in C++ template metaprogramming that gives you the ability to inspect and transform the properties of types. For example, given a generic type T - it could be int, bool, std::vector or whatever you want - with type traits you can ask the compiler some questions: is it an integer?</div></div><div class="bookmark-href"><img src="https://www.internalpointers.com/img/favicon.ico" class="icon bookmark-icon"/>https://www.internalpointers.com/post/quick-primer-type-traits-modern-cpp</div></div><img src="https://raw.githubusercontent.com/monocasual/internalpointers-files/master/2020/01/type-traits-modern-cpp.png" class="bookmark-image"/></a></figure><p id="959aee3a-7d56-4f74-bbaa-3d660079a650" class=""><a href="https://dev.to/sandordargo/what-are-type-traits-in-c-18j5">https://dev.to/sandordargo/what-are-type-traits-in-c-18j5</a></p><p id="4ba5c7dd-ce77-425e-9496-1f0aa5b020ab" class=""><a href="https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm">https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm</a></p></details></li></ul><p id="771ce5ce-6931-404c-b1da-5f25251cb2b7" class="">
</p><p id="08772abb-dd1c-4bb2-9606-7604a3b96102" class=""><mark class="highlight-pink_background">so what are type traits? </mark></p><p id="be1a0be0-b99f-4981-aeeb-224779927566" class=""><mark class="highlight-purple">let&#x27;s start with what is a trait. </mark><div class="indented"><blockquote id="0b95f0be-c190-43bc-b52b-ca662f1e4d0b" class="">a <em>trait</em> is &quot;a particular characteristic that can produce a particular type of behavior&quot;. Or simply &quot;a characteristic, especially of a personality&quot;.</blockquote><blockquote id="c0ca6cc6-7c94-4950-9dba-dd166345a8b0" class="">we can think about type traits as properties of a type .</blockquote></div></p><p id="0bf001e6-cf61-444f-a2f7-5896106d3cfe" class="">you&#x27;d often need the information on what kind of types are accepted by a template, and what types are supported by certain operations. While concepts are much superior in terms of expressiveness or usability, with type traits you could already introduce compile-time conditions on what should be accepted as valid code and what not.</p><p id="40f02366-e00f-45ac-a444-43df5d4cfad3" class="">Though <em>type traits</em> can help with even more. With their help, you can also add or remove the <code>const</code> specifier, you can turn a pointer or a reference into a value, and so on….</p><p id="332f2f9a-a4ff-45a2-8eed-820d157ef876" class="">
</p><blockquote id="8e92456a-1659-442c-8540-80d3665ee113" class=""><strong>Type traits</strong> are a clever technique used in C++ template metaprogramming that gives you the ability to inspect and transform the properties of <em>types</em>.</blockquote><blockquote id="bbb8d3d5-520e-4b68-ac57-9ffbd74085f3" class="">For example, given a generic type <code>T</code> — it could be <code>int</code>, <code>bool</code>, <code>std::vector</code>, or whatever you want — with type traits you can ask the compiler some questions: is it an integer? Is it a function? Is it a pointer? Or maybe a class? Does it have a destructor? Can you copy it? Will it throw exceptions? ... and so on. This is extremely useful in <strong>conditional compilation</strong>, where you instruct the compiler to pick the right path according to the type in input. We will see an example shortly.</blockquote><p id="c9db8419-a923-425a-8bd9-9f4e8d18a79c" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="6172c4b9-9732-49a0-890b-2ffa3427257c"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Generic programming (writing code that works with any data type meeting a set of requirements) has become the method of choice for providing reusable code. However, there are times in generic programming when &quot;generic&quot; just isn&#x27;t good enough - sometimes the differences between types are too large for an efficient generic implementation. This is when the traits technique becomes important - by encapsulating those properties that need to be considered on a type-by-type basis inside a traits class, we can minimize the amount of code that has to differ from one type to another and maximize the amount of generic code.</div></figure><p id="1979d82d-7bbb-44c6-8242-a72da699234c" class="">
</p><p id="e87c4442-de07-448f-a775-1c32b12eda90" class="">
</p><h2 id="839f5d14-2910-419a-8891-e0e23b7d9bf8" class=""><mark class="highlight-blue">Tag Dispatching :</mark></h2><p id="e19685d3-741b-445e-a216-6f139f567b90" class="">
</p><p id="8d0de6db-7efd-4638-a471-3321547847a1" class="">sometimes in metaprogramming, we want our template function to behave differently depending on the types given as parameters</p><p id="02216230-b329-4be0-b2a4-680fa7bbf195" class="">we can achieve that in different means :<div class="indented"><ul id="78611591-3975-4405-a426-f52f02f5f7ea" class="bulleted-list"><li style="list-style-type:disc">there’s<a href="https://en.wikipedia.org/wiki/Conditional_compilation"> </a><mark class="highlight-red_background"><a href="https://en.wikipedia.org/wiki/Conditional_compilation"><strong>Conditional compilation</strong></a></mark><strong>, which</strong> <strong>helps to compile a specific portion of the program or lets us skip the compilation of some specific part of the program based on some conditions</strong></li></ul><ul id="f2ebc65d-cf6d-471d-af64-83cbb3f9d446" class="bulleted-list"><li style="list-style-type:disc">using<mark class="highlight-red_background"> type-traits (is_integral …)</mark></li></ul><ul id="709e6faf-565e-403c-b971-5a68d457da99" class="bulleted-list"><li style="list-style-type:disc">more simply, we can make a function that takes an option number(flag) , and depending on that number executes a different code.</li></ul><ul id="9a149d86-2feb-4314-9d47-f0735e4ba95c" class="bulleted-list"><li style="list-style-type:disc">or we can use <mark class="highlight-red_background">Tag Dispatching:</mark></li></ul></div></p><p id="39136434-2f08-4a7b-8d61-84047d181ac0" class=""><div class="indented"><blockquote id="6583303b-4ce9-452d-9547-b2d07a7740e8" class="">Tag-dispatching is a metaprogramming technique to overload a function using different tag parameters. The right overload is chosen by a compiler at compile time</blockquote></div></p><p id="a6007989-50bd-4551-ab9d-459f4200d846" class=""><div class="indented"><ul id="adb06266-84ac-43d9-afa4-ba523ad8b250" class="bulleted-list"><li style="list-style-type:disc">it works like this:</li></ul><p id="ac14aaa5-6072-4d0d-b58d-261c523efa0d" class="">by creating several tags (so several types), we can use them to route the execution through various overloads of a function.</p><p id="9c627c97-b255-4229-ad07-07577a18ef20" class="">
</p></div></p><pre id="979a4203-97cb-4c5b-92b8-59c885e10801" class="code"><code>
template&lt;class It&gt;
It plus2_impl(It it, std::forward_iterator_tag) 
{
    ++it; ++it;
    return it;
}

template&lt;class It&gt;
It plus2_impl(It it, std::random_access_iterator_tag) 
{
    return it + 2;
}

template&lt;class It&gt;
It plus2(It it) 
{
    using Tag = typename std::iterator_traits&lt;It&gt;::iterator_category;
    return plus2_impl(it, Tag{});
}</code></pre><p id="1383ccab-4a24-4df4-9d68-071878f30b25" class="">
</p><p id="3cc62159-cfb1-47a5-b5e3-a683dd2a4de9" class="">
</p></div></p><h2 id="eb3c6b0b-d455-426b-868d-a57604b67a27" class=""><mark class="highlight-purple">-</mark> <a href="https://cplusplus.com/reference/type_traits/is_integral/"><mark class="highlight-purple">is_integral </mark></a><mark class="highlight-purple">:</mark></h2><p id="629e10e9-355b-4634-ba08-4713d39eb7a6" class="">
</p><p id="5fa63cfd-475e-4707-8e37-87f72c2a5cd2" class=""> <code>template &lt;class T&gt; struct is_integral;</code><div class="indented"><figure id="dfa9aed0-8830-400c-808f-61e678af072d" class="image"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-31_at_5.10.31_PM.png"><img style="width:552px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-31_at_5.10.31_PM.png"/></a></figure><p id="9d5ec94b-23f9-4368-9f67-d328f76c0c4d" class="">is_integral is a Trait class that identifies whether <em>T </em>is an integral type.</p><p id="7ac18f87-dc49-455f-8e8c-696e23d40997" class="">it inherits from the class integral_constant either TRUE or FALSE depending on the type is it an integral type or not </p><blockquote id="0d342e4f-505c-40ee-bd5d-a2b7b6fdaeca" class=""><mark class="highlight-red">here are the integral types :</mark> </blockquote><pre id="b22e2128-8c24-4232-be11-fadbfbb53ec6" class="code"><code>bool , char ,char16_t , char32_t  , wchar_t , signed char,short int, int
long int,long long int , unsigned char , unsigned short int , unsigned int
unsigned long int, unsigned long long int</code></pre></div></p><p id="70ca8dfa-0162-496e-a272-799087b3328a" class="">
</p><h2 id="92861586-5cf4-47b5-a189-2315e687e281" class=""><a href="https://cplusplus.com/reference/type_traits/enable_if/"><mark class="highlight-purple">-</mark></a><a href="https://cplusplus.com/reference/type_traits/enable_if/"> </a><a href="https://cplusplus.com/reference/type_traits/enable_if/"><mark class="highlight-purple">enable_if :</mark></a></h2><ul id="f94f1ba9-f0e4-4c9c-bfa0-043daf810962" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="166aae0b-ea32-4536-83ea-836ab5193619" class=""><a href="https://leimao.github.io/blog/CPP-Enable-If/">https://leimao.github.io/blog/CPP-Enable-If/</a></p><p id="e281f01c-6920-4aaf-b355-4ef96c4e8243" class=""><a href="https://h-deb.clg.qc.ca/Sujets/TrucsScouts/Comprendre_enable_if.html">https://h-deb.clg.qc.ca/Sujets/TrucsScouts/Comprendre_enable_if.html</a></p></details></li></ul><p id="377fabfb-1cc6-4c79-a3e8-0b38c7860dda" class=""><div class="indented"><p id="0a78ed3a-f60c-40bd-bb1c-bbff10b17257" class="">The <mark class="highlight-red">enable_if</mark> <a href="https://h-deb.clg.qc.ca/Sujets/Divers--cplusplus/Traits.html">trait</a> is a technique to control the application of <a href="https://h-deb.clg.qc.ca/Sujets/Divers--cplusplus/SFINAE.html">SFINAE</a>.</p><p id="f367640c-1237-4ab3-a649-0b16ecc23b82" class="">In C++ metaprogramming, <code>std::enable_if</code> is an important function to enable certain types for template specialization via some predicates known at the compile time. Using types that are not <mark class="highlight-teal">enabled</mark> by <code>std::enable_if </code>for template specialization will result in a compile-time error.</p><p id="d93e7e2b-9ab5-4046-8d1e-e8fb0badd5fd" class=""><div class="indented"><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="b135c6ca-57cf-4376-811c-86eb3e620a72"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">This metafunction is a convenient way to leverage <a href="https://en.cppreference.com/w/cpp/language/sfinae">SFINAE</a> prior to C++20&#x27;s <a href="https://en.cppreference.com/w/cpp/language/constraints">concepts</a>, in particular for conditionally removing functions from the <a href="https://en.cppreference.com/w/cpp/language/overload_resolution">candidate set</a> based on type traits, allowing separate function overloads or specializations based on those different type traits.<p id="bed5ab44-17bf-4633-9011-7cc0a9166d27" class=""><strong>std::enable_if</strong> can be used in many forms, including:</p><ul id="037bc7e4-e792-4ad4-a3a0-35eaf2c7d143" class="bulleted-list"><li style="list-style-type:disc">as an additional function argument (not applicable to operator overloads)</li></ul><ul id="1db4ec76-b7c9-4372-b686-c57a971847d2" class="bulleted-list"><li style="list-style-type:disc">as a return type (not applicable to constructors and destructors)</li></ul><ul id="51a79b5e-b5d0-405d-8445-668269c5241c" class="bulleted-list"><li style="list-style-type:disc">as a class template or function template parameter</li></ul></div></figure></div></p><p id="088e83b0-368b-4d1a-b75f-060af759192a" class="">
</p><p id="83e79aab-8696-4386-b56d-fdbc52a58640" class="">implementation of <mark class="highlight-pink">enable_if</mark> :</p><pre id="7765c4f7-fad3-4e57-869d-2463699d6e50" class="code"><code>template&lt;bool B, class T = void&gt;
struct enable_if {};
 
template&lt;class T&gt;
struct enable_if&lt;true, T&gt; { typedef T type; };</code></pre></div></p><p id="eab3ac52-da91-45e8-99e3-dafb5ea74c14" class="">
</p><p id="c74496ec-6c4d-4801-b5b6-4b9878388265" class=""> </p><h2 id="b1a90836-fcd5-47a2-af16-b8e8c8414a7a" class=""><mark class="highlight-purple">- </mark><a href="https://cplusplus.com/reference/algorithm/lexicographical_compare/"><mark class="highlight-purple"><strong>lexicographical_compare</strong></mark></a><mark class="highlight-purple"><strong> :</strong></mark></h2><blockquote id="67b07edd-9a98-441f-9317-607e66cc9df2" class=""><em>lexicographical comparison</em> is the kind of comparison generally used to sort words alphabetically in dictionaries; It involves comparing sequentially the elements that have the same position in both ranges against each other until one element is not equivalent to the other. The result of comparing these first non-matching elements is the result of the lexicographical comparison.</blockquote><ul id="88f9f21f-81df-4bad-900b-a2588d1b4fdb" class="bulleted-list"><li style="list-style-type:disc">The behavior of this function template is equivalent to:</li></ul><pre id="e129b2eb-2124-4fc2-9921-ecb3437cfa13" class="code"><code>
template &lt;class InputIterator1, class InputIterator2&gt;
  bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                                InputIterator2 first2, InputIterator2 last2)
{
  while (first1!=last1)
  {
    if (first2==last2 || *first2&lt;*first1) return false;
    else if (*first1&lt;*first2) return true;
    ++first1; ++first2;
  }
  return (first2!=last2);
}</code></pre><h2 id="f25ddaa8-a2d5-44c1-a32e-0b2e725cdb05" class=""><mark class="highlight-purple">- </mark><a href="https://cplusplus.com/reference/utility/pair/?kw=pair"><mark class="highlight-purple">std::pair</mark></a><a href="https://cplusplus.com/reference/utility/pair/?kw=pair"><mark class="highlight-purple"><strong> </strong></mark></a><mark class="highlight-purple"><strong>:</strong></mark></h2><p id="e072fac9-f17e-455d-83b1-ff9109138822" class="">the pair is pretty strait forward This class couples together a pair of values, which may be of different types (T1 and T2). The individual values can be accessed through its public members <mark class="highlight-orange">first</mark>
 and <mark class="highlight-orange">second</mark>.<div class="indented"><ul id="4564d64b-1613-467e-8f81-8cf5984f4076" class="bulleted-list"><li style="list-style-type:disc">the make_pair is just a function that returns a pair.</li></ul></div></p><h1 id="3e647309-5992-4196-a71c-5d3b237d7768" class=""><mark class="highlight-red">3-  Iterators :</mark></h1><p id="e7008200-dbcd-4bbb-b9fb-08a0a4e9f56d" class=""><div class="indented"><ul id="191f87e1-5ab7-4a59-ad49-ab98b0110c2a" class="bulleted-list"><li style="list-style-type:disc">so what are iterators, and how can we implement them?</li></ul><p id="84217be6-a87f-4359-b464-00e8a25b0ca9" class=""><div class="indented"><blockquote id="e94c905f-4a17-41b4-806f-b629869f3600" class=""><mark class="highlight-orange">An </mark><mark class="highlight-orange"><strong>iterator </strong></mark>
is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container. They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them. Iterators play a critical role in connecting algorithms with containers along with the manipulation of data stored inside the containers. </blockquote><blockquote id="28a20091-af67-4bf1-8374-785e1f0370f5" class="">in c++ there are 5 categories of iterators, each with its own properties that we should know in order to work with them efficiently <figure id="020d15ad-bb31-4ecf-a145-ba9e6b1a3c9d" class="image"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/iterator_traits.png"><img style="width:1152px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/iterator_traits.png"/></a></figure></blockquote><p id="c53f9688-c430-4e77-aa30-c70c7dfcb06e" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="19107039-ca69-4a63-b353-017a4f85c303"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">we can think of an iterator as some generic pointer that will work with any container no matter what it is.  now, how can we make a generic pointer?</div></figure><p id="f32f13e6-9aa2-438e-b102-06935e3ad9a6" class="">
</p></div></p><h2 id="308a8b18-f63d-4e20-af9a-2802e247a98c" class=""><mark class="highlight-purple">- Iterator Traits : </mark></h2><ul id="06f64f99-0a5e-4aca-8a26-1d389df1e9d0" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="87fcfc42-5532-490b-9729-f79123b07e87" class=""><a href="https://cplusplus.com/reference/iterator/iterator_traits/">https://cplusplus.com/reference/iterator/iterator_traits/</a></p><p id="2ac04f2a-1774-49a2-8733-46f2c97599b4" class=""><a href="https://www.fluentcpp.com/2018/05/08/std-iterator-deprecated/">https://www.fluentcpp.com/2018/05/08/std-iterator-deprecated/</a></p><p id="e4eccb16-d32c-4b19-99b8-844a8dd2800d" class=""><a href="https://www.codeproject.com/Articles/36530/An-Introduction-to-Iterator-Traits">https://www.codeproject.com/Articles/36530/An-Introduction-to-Iterator-Traits</a></p><p id="d08605ca-ce81-451b-a19d-c7f9ad64b4a9" class=""><a href="https://stackoverflow.com/questions/6742008/what-are-the-typical-use-cases-of-an-iterator-trait">https://stackoverflow.com/questions/6742008/what-are-the-typical-use-cases-of-an-iterator-trait</a></p></details></li></ul><p id="573740e5-e44f-4d78-9b5b-04852deb5043" class=""><div class="indented"><blockquote id="5a8ed83d-ab62-4deb-bbb0-e2147f036cfc" class="">Generic code that uses iterators, such as the STL algorithms which use them intensely, needs information about them. For example, it needs the type of object that the iterators refer to. </blockquote><blockquote id="0977691c-212b-4e1a-8995-d7c018efd253" class="">so how does it gets this information?</blockquote><blockquote id="eea6ee4c-ac7d-4b19-a682-53aa055b8067" class="">Another example of the required information is the capabilities of the iterator: is it just an input iterator, that supports <code>++ </code> but should not be read twice? Or a forward iterator that can be read several times? Or a bidirectional that can also do <code>--</code>? Or a random access iterator, that can jump around with <code>+=</code>, <code>+</code>, <code>-=</code>, and <code>-</code>? Or an output iterator?</blockquote><blockquote id="f533c54f-b8d4-4124-8602-be220142c40e" class="">This piece of information is useful for some algorithms that would be more or less efficient depending on those capabilities. Such an algorithm typically has several implementations and chooses one to route to depending on the category of the iterator.</blockquote><p id="e677bb06-023f-46c7-aa84-e3c4ea96a393" class="">
</p><p id="084c2d29-ee3b-4678-8e40-fd98b7b1b6cb" class=""><a href="https://en.cppreference.com/w/cpp/iterator/iterator_traits"><mark class="highlight-purple">Iterator Traits</mark></a><mark class="highlight-purple"> </mark>is a class trait that provides specific information about the iterator that stl::algorithms needs </p><table id="29661cf0-62f9-4fa7-906d-043eeb5d45b2" class="simple-table"><tbody><tr id="1ebc69c7-2b6c-4ae6-97bc-7ca8d2ca393c"><td id="qDYD" class="" style="width:142px">member</td><td id="Kg]c" class="" style="width:497px">description</td></tr><tr id="9c9cd921-c7c8-469c-8bb8-71eceb8ec056"><td id="qDYD" class="" style="width:142px">difference_type</td><td id="Kg]c" class="" style="width:497px">Type to express the result of subtracting one iterator from another. it gets stored in type able to represent the result of any valid pointer subtraction operation(<a href="https://en.cppreference.com/w/cpp/types/ptrdiff_t"><mark class="highlight-red">ptrdiff_t</mark></a>)</td></tr><tr id="a72b3c75-96bb-4b3c-bd15-f4b95bef0d3e"><td id="qDYD" class="" style="width:142px">value_type</td><td id="Kg]c" class="" style="width:497px">The type of element the iterator can point to.</td></tr><tr id="46c863c2-7672-4ef7-9f20-af616de1be2e"><td id="qDYD" class="" style="width:142px">pointer</td><td id="Kg]c" class="" style="width:497px">The type of a pointer to an element the iterator can point to.</td></tr><tr id="18ce0dd1-7e91-495e-bafa-f4d9d7b1181a"><td id="qDYD" class="" style="width:142px">reference</td><td id="Kg]c" class="" style="width:497px">The type of reference to an element the iterator can point to.</td></tr><tr id="d9a0ce55-df8b-4070-8306-512273d027d6"><td id="qDYD" class="" style="width:142px">iterator_category</td><td id="Kg]c" class="" style="width:497px">The iterator category. It can be one of these:
• <a href="https://cplusplus.com/input_iterator_tag">input_iterator_tag</a>
• <a href="https://cplusplus.com/output_iterator_tag">output_iterator_tag</a>
• <a href="https://cplusplus.com/forward_iterator_tag">forward_iterator_tag</a>
• <a href="https://cplusplus.com/bidirectional_iterator_tag">bidirectional_iterator_tag</a>
• <a href="https://cplusplus.com/random_access_iterator_tag">random_access_iterator_tag</a></td></tr></tbody></table><blockquote id="60756a07-7cb4-4fed-8c46-91bcc75a5511" class="">The iterator_traits class template comes with a default definition that obtains these types from the iterator type itself (<mark class="highlight-red"><a href="https://cplusplus.com/reference/iterator/iterator/">iterator class</a></mark>). It is also specialized for pointers (T*) and pointers to const (const T*).Note that any custom class will have a valid instantiation of iterator_traits if it publicly inherits the base class <a href="https://cplusplus.com/iterator">std::iterator</a>.</blockquote><h1 id="cebc102e-0012-4d29-bd8e-c76315ddd5db" class=""><mark class="highlight-teal">Member types</mark></h1><table id="90c8095b-a8aa-4480-9fee-3cfcd0d6e3d6" class="simple-table"><tbody><tr id="33c6dc5b-4f98-40ae-82e1-df4e15a2fdb4"><td id="MEtS" class="" style="width:127px">member</td><td id="Wow@" class="" style="width:182px">generic definition</td><td id="L}A]" class="" style="width:162px"><code>T*</code> specialization</td><td id="oEq|" class="" style="width:162px"><code>const T*</code> specialization</td></tr><tr id="b52e27ba-ffa6-4bf3-b095-f816ce23c0d7"><td id="MEtS" class="" style="width:127px">difference_type</td><td id="Wow@" class="" style="width:182px">Iterator::difference_type</td><td id="L}A]" class="" style="width:162px"><a href="https://cplusplus.com/ptrdiff_t">ptrdiff_t</a></td><td id="oEq|" class="" style="width:162px"><a href="https://cplusplus.com/ptrdiff_t">ptrdiff_t</a></td></tr><tr id="01bb906a-c11b-4c18-971f-961e160c3d43"><td id="MEtS" class="" style="width:127px">value_type</td><td id="Wow@" class="" style="width:182px">Iterator::value_type</td><td id="L}A]" class="" style="width:162px">T</td><td id="oEq|" class="" style="width:162px">T</td></tr><tr id="ad02d77b-1a41-49a9-8d6a-48ae1906b4f1"><td id="MEtS" class="" style="width:127px">pointer</td><td id="Wow@" class="" style="width:182px">Iterator::pointer</td><td id="L}A]" class="" style="width:162px">T*</td><td id="oEq|" class="" style="width:162px">const T*</td></tr><tr id="f9fac0d9-8739-4263-ae3a-e7b2654750d2"><td id="MEtS" class="" style="width:127px">reference</td><td id="Wow@" class="" style="width:182px">Iterator::reference</td><td id="L}A]" class="" style="width:162px">T&amp;</td><td id="oEq|" class="" style="width:162px">const T&amp;</td></tr><tr id="cfa4211b-51a7-4380-8cf1-d3349259a625"><td id="MEtS" class="" style="width:127px">iterator_category</td><td id="Wow@" class="" style="width:182px">Iterator::iterator_category</td><td id="L}A]" class="" style="width:162px"><a href="https://cplusplus.com/random_access_iterator_tag">random_access_iterator_tag</a></td><td id="oEq|" class="" style="width:162px"><a href="https://cplusplus.com/random_access_iterator_tag">random_access_iterator_tag</a></td></tr></tbody></table></div></p><p id="6ed2e0f1-4539-4a3e-b049-d78215f82ee8" class="">
</p></div></p><h2 id="631af233-3cff-4595-9eda-04c4f72c3cf6" class=""><mark class="highlight-purple">-</mark> <mark class="highlight-purple">the Iterator Class :</mark></h2><ul id="80fb2962-8712-440c-84b9-eda772cae5c7" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="56dc5036-ddff-4282-932c-1b7820042333" class=""><a href="https://cplusplus.com/reference/cstddef/ptrdiff_t/">https://cplusplus.com/reference/cstddef/ptrdiff_t/</a></p><p id="91bc02bc-39bb-4384-afa0-a3fe48ce5bfe" class=""><a href="https://cplusplus.com/reference/iterator/iterator/">https://cplusplus.com/reference/iterator/iterator/</a></p><p id="0c7d523e-de00-4c2b-8b82-5412e54a1fb0" class=""><a href="https://cplusplus.com/reference/iterator/">https://cplusplus.com/reference/iterator/</a></p></details></li></ul><p id="d56952f4-8fa6-47b2-81bf-5244a0db3ba5" class="">
</p><p id="0c3b223f-bfe7-420f-b83c-318b814e1ce5" class="">
</p><p id="d8afd75f-34c6-4eb5-880c-af730bfd39ea" class=""><code>std::iterator</code> is a helper to define the iterator traits of an iterator.</p><p id="935d42df-696a-41bf-a587-ec5403be49c7" class=""><code>std::iterator</code> is a template, that takes 5 template parameters:</p><pre id="2d888c9e-1019-44f4-b476-e3a23a9c0e30" class="code code-wrap"><code>template&lt;
    typename Category,
    typename T,
    typename Distance = std::ptrdiff_t,
    typename Pointer = T*,
    typename Reference = T&amp;
&gt; struct iterator;</code></pre><p id="7fbbf933-af2e-4920-a9c2-88e492132faa" class="">Those 5 names sound familiar, right? Those template types correspond to the 5 types required by the STL on iterators.</p><p id="fdc411a4-724e-4a6b-9c1b-d1fd88dc276c" class="">The job of <code>std::iterator</code> is to expose those types. Here is one possible implementation of <code>std::iterator</code>:</p><pre id="e04495f0-e1ef-4fa9-977c-31476b93c6c6" class="code code-wrap"><code>template&lt;
    typename Category,
    typename T,
    typename Distance = std::ptrdiff_t,
    typename Pointer = T*,
    typename Reference = T&amp;
&gt; struct iterator
{
    using iterator_category = Category;
    using value_type = T;
    using difference_type = Distance;
    using pointer = Pointer;
    using reference = Reference;
};</code></pre><p id="93cd7a34-4abc-4a87-8a2d-a98d876d2b1c" class="">
</p><p id="4ea00863-9628-4ad8-bc45-ca7be1cdd039" class=""><code>std::iterator</code> allows an iterator to define these 5 types, by <strong>inheriting from </strong><code><strong>std::iterator</strong></code> and passing it those types (at least the first 2 since the other 3 have default values):</p><pre id="cf770f55-2b22-404a-a5b0-5203626c0088" class="code code-wrap"><code>class MyIterator : public std::iterator&lt;std::random_access_iterator, int&gt;
{
    // ...
};</code></pre><p id="5a75271b-f2e9-4bc7-b6f6-560f90e5b226" class="">By inheriting from <code>std::iterator</code>,  <code>MyIterator</code> also exposes the 5 types.</p><p id="8657edfd-acc1-49be-ae75-ba4b2bb08c3d" class="">
</p><p id="d330e0e2-2bec-429e-8ac5-6c88f1c3fb10" class="">
</p><h1 id="bdc8aa7f-d650-4121-9910-b8a80b55ff15" class=""><mark class="highlight-red">4 - Allocator :</mark></h1><ul id="8e39a780-2c76-41af-b0bd-ec35b7da94b9" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="53cc290d-8920-4481-b5ec-55799cd43a45" class=""><a href="https://en.wikipedia.org/wiki/Allocator_(C%2B%2B)">https://en.wikipedia.org/wiki/Allocator_(C%2B%2B)</a></p><p id="66234d15-3e0a-48e9-9f44-f8be1f9e9342" class=""><a href="https://medium.com/@terselich/1-a-guide-to-implement-a-simple-c-stl-allocator-705ede6b60e4">https://medium.com/@terselich/1-a-guide-to-implement-a-simple-c-stl-allocator-705ede6b60e4</a></p><p id="10c45d48-55a8-4aa1-af69-dc934abbf76a" class=""><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/Allocator.html">https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/Allocator.html</a></p><p id="2cd08f2a-e68a-424f-80a7-13e16c44715c" class=""><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html">https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html</a></p><p id="d26db617-68ae-4c4d-ab9c-6ac4c28ffc79" class=""><a href="https://hackingcpp.com/cpp/design/allocators.html">https://hackingcpp.com/cpp/design/allocators.html</a></p><p id="e6bfa2f8-c40c-4e38-a152-05ce3a112acd" class=""><a href="https://stackoverflow.com/questions/5628059/c-stl-allocator-vs-operator-new">https://stackoverflow.com/questions/5628059/c-stl-allocator-vs-operator-new</a></p><p id="bac655ba-2b5a-4e2e-b197-ebe4db7e6805" class=""><a href="https://stackoverflow.com/questions/4254811/memory-management-stdallocator">https://stackoverflow.com/questions/4254811/memory-management-stdallocator</a></p><p id="615ff043-96e4-47d0-9d3d-2cc7f8f225f1" class=""><a href="https://stackoverflow.com/questions/4254811/memory-management-stdallocator">https://stackoverflow.com/questions/4254811/memory-management-stdallocator</a></p><p id="4ac47b19-b1c1-432e-9199-5323d0d83386" class=""><a href="https://stackoverflow.com/questions/31358804/whats-the-advantage-of-using-stdallocator-instead-of-new-in-c">https://stackoverflow.com/questions/31358804/whats-the-advantage-of-using-stdallocator-instead-of-new-in-c</a></p></details></li></ul><p id="a7ea8bf0-1c7d-4980-9bbc-81063c50a000" class="">
</p><blockquote id="420e5989-139c-4ba6-b090-cda57e12b373" class="">an Allocator is an object that’s responsible for encapsulating memory management<p id="ab18c7cc-b795-42a7-be96-26eee53e1b1d" class="">every stl container except (<code>std::array</code>, to <code>std::shared_ptr</code> and <code>std::function</code>)</p><p id="c78079bd-39f9-46b0-b30f-f393f16613c0" class="">has an allocator that Encapsulates memory allocation and deallocation strategy.</p></blockquote><p id="2e861b91-587f-4f42-8777-b83e9d7513b9" class="">
</p><ul id="508040dd-6d91-4d16-a201-03f2aa7bb787" class="bulleted-list"><li style="list-style-type:disc">you might ask yourself a question, what about the new and delete ? what’s wrong with them ?</li></ul><p id="78865d7c-93e2-4dee-a582-58e1a261cd57" class=""><div class="indented"><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="0a8d7a9c-1560-4fd3-8080-a9540027b720"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">if you are coming from a c language background you may ask why not malloc or alloc instead of new and delete? , so let’s first answer this <blockquote id="27eb43f9-b88a-4209-9a74-4cff87cbfe58" class=""><mark class="highlight-orange">malloc</mark>() is a library function of stdlib.h and it was used in C language to allocate memory for N blocks at run time, it can also be used in C++ programming language. Whenever a program needs memory to declare at run time we can use this function.</blockquote><blockquote id="d172e99e-f399-4bef-b405-3877e82f5b6c" class="">while <mark class="highlight-orange">new</mark> is an operator in C++ programming language, it is also used to declare memory for N blocks at run time.</blockquote><blockquote id="f7bacc0f-789a-4803-83a9-6e9e4e82d673" class=""><mark class="highlight-teal_background">here are some differences between malloc and new :</mark><ol type="1" id="22d70117-0633-48a2-af07-47fbbb9a690d" class="numbered-list" start="1"><li>new allocates memory and calls the constructor for object initialization. But malloc() allocates memory and does not call the constructor.</li></ol><ol type="1" id="e89daa81-5665-460b-a415-d54caf011c9f" class="numbered-list" start="2"><li>new is an operator whereas malloc() is a library function.</li></ol><ol type="1" id="38b9d473-a6e7-4006-ad62-cdacc47c32e0" class="numbered-list" start="3"><li>The return type of new is the exact data type while malloc() returns void*.</li></ol><ol type="1" id="089d672a-2d0f-4532-bd36-6243c59df827" class="numbered-list" start="4"><li>new is faster than malloc() because an operator is always faster than a function.</li></ol></blockquote></div></figure><p id="7b2d83ff-8142-4f11-a6b2-5acb94ce9945" class="">
</p></div></p><p id="5ad9d941-8527-433a-9cbf-502748f50fb8" class="">now time to answer why using an <mark class="highlight-red">allocator</mark> and not <mark class="highlight-pink">new</mark> and <mark class="highlight-pink">delete</mark> :<div class="indented"><p id="c50ec205-0f6e-487a-80bb-71796ac179ac" class="">the std::allocator was not created to replace new and delete.</p><p id="95db8855-9ab1-4989-bdc2-63d2859bc7a8" class=""> in fact,  the allocator uses <mark class="highlight-pink">new</mark> and <mark class="highlight-pink">delete</mark> in its internals.</p><p id="49f5da90-0d7d-4575-bc43-2b2cb3a82dc0" class="">what’s so special about the allocator is that it separates the <mark class="highlight-purple">allocation</mark> and <mark class="highlight-purple">construction</mark>, <mark class="highlight-teal">deallocation</mark> and <mark class="highlight-teal">destruction</mark>.</p><p id="84d33120-6363-4d44-a11b-de2f215b7036" class="">for general programming using new and delete is more than enough, but when creating a container it&#x27;s a must to take control of these things. </p><p id="dc50be8e-9a5d-4de0-80bb-44be8d2d417d" class="">here is an example :</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="a27cb9fd-9f31-45c0-973f-81c91beb1cd4"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Consider the following code:<pre id="c457f9f9-95e6-4ba7-a24e-7160203cd7ba" class="code code-wrap"><code>std::vector&lt;X&gt; v;
v.reserve(4);        // (1)
v.push_back( X{} );  // (2)
v.push_back( X{} );  // (3)
v.clear();           // (4)
</code></pre><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="d78d3842-6521-4bfb-a92b-c08e05570d45"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Here line (1) must allocate enough memory for four objects, but not construct them yet. Then lines (2) and (3) must construct objects into the allocated memory. Then line (4) must destroy those objects, but not deallocate the memory. Finally, in the vector&#x27;s destructor, all the memory can be deallocated.</div></figure></div></figure><hr id="a7368488-3f37-4b85-aafc-2c8d4119bd01"/><p id="f11ab41e-6791-4f4c-b92a-525c64725830" class="">
</p></div></p><ul id="1f76c002-16c2-495c-975f-116fa2a1cf0e" class="bulleted-list"><li style="list-style-type:disc">let’s deep dive into the std::allocator and how it works :<p id="e3d1cbec-e7a0-4ad4-b93a-e9f7ad4148f0" class="">
</p></li></ul><h2 id="cbf7f65b-0b2b-4cf8-b498-e387ac89529c" class=""><mark class="highlight-purple">- </mark><mark class="highlight-purple"><strong>allocator_traits :</strong></mark></h2><p id="baaee093-df08-4fa6-bef2-e26b08ed6a23" class=""><div class="indented"><p id="28632d16-8d79-4f74-b797-ef0bc0df1a90" class="">just like the iterator, the std::allocator needs to have some information about the container in order for it to work properly.</p><blockquote id="48870e30-0a8e-469f-a520-26d43086777e" class="">The <code>allocator_traits</code>
 the class template provides a standardized way to access various properties of allocators. The standard containers and other standard library components access allocators through this template, which makes it possible to use any class type as an allocator, as long as the user-provided specialization of <code>allocator_traits</code>
 implements all required functionality.</blockquote></div></p><p id="d10a2cc5-de59-4109-b155-5e8169aa585e" class="">
</p><p id="28eaef18-3101-4e1e-b5da-0cfe253647e3" class="">The default, non-specialized, <code>allocator_traits</code>
 contains the following members:</p><h3 id="b72a535c-15f3-4349-aa7a-5db8f888e1bf" class=""><strong>Member types</strong></h3><table id="f8985dc4-d82a-4f9f-afb0-830f81236f9a" class="simple-table"><tbody><tr id="ee25111b-900b-420c-a3b4-034f736d10ca"><td id="CF|d" class=""><strong>Type</strong></td><td id="MlZ{" class="" style="width:456px"><strong>Definition</strong></td></tr><tr id="496734e1-1d41-483a-8cca-6e75dc8f1480"><td id="CF|d" class=""><code>allocator_type</code></td><td id="MlZ{" class="" style="width:456px">Alloc</td></tr><tr id="d8c15fcf-bf8a-4ae7-930e-61edeec89682"><td id="CF|d" class=""><code>value_type</code></td><td id="MlZ{" class="" style="width:456px">Alloc::value_type</td></tr><tr id="8c028314-d013-4f7a-8650-6510deac2712"><td id="CF|d" class=""><code>pointer</code></td><td id="MlZ{" class="" style="width:456px">Alloc::pointer if present, otherwise value_type*</td></tr><tr id="d4f96794-9d64-44bc-b1da-c92a8d3f027f"><td id="CF|d" class=""><code>const_pointer</code></td><td id="MlZ{" class="" style="width:456px">Alloc::const_pointer if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/pointer_traits.html">std::pointer_traits</a>&lt;pointer&gt;::rebind&lt;const value_type&gt;</td></tr><tr id="03913f1a-e61a-4845-8478-06667812dff9"><td id="CF|d" class=""><code>void_pointer</code></td><td id="MlZ{" class="" style="width:456px">Alloc::void_pointer if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/pointer_traits.html">std::pointer_traits</a>&lt;pointer&gt;::rebind&lt;void&gt;</td></tr><tr id="8d294d91-90e7-4816-a124-c40173dd5922"><td id="CF|d" class=""><code>const_void_pointer</code></td><td id="MlZ{" class="" style="width:456px">Alloc::const_void_pointer if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/pointer_traits.html">std::pointer_traits</a>&lt;pointer&gt;::rebind&lt;const void&gt;</td></tr><tr id="a080e539-9ddf-4fbf-8ecc-9c686b5d0637"><td id="CF|d" class=""><code>difference_type</code></td><td id="MlZ{" class="" style="width:456px">Alloc::difference_type if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/pointer_traits.html">std::pointer_traits</a>&lt;pointer&gt;::difference_type</td></tr><tr id="05c88b75-aa44-4b14-a728-1be3670e188d"><td id="CF|d" class=""><code>size_type</code></td><td id="MlZ{" class="" style="width:456px">Alloc::size_type if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/make_unsigned.html">std::make_unsigned</a>&lt;difference_type&gt;::type</td></tr><tr id="b7f5d233-d240-4867-b27b-3599a4234b21"><td id="CF|d" class=""><code>propagate_on_container_copy_assignment</code></td><td id="MlZ{" class="" style="width:456px">Alloc::propagate_on_container_copy_assignment if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/integral_constant.html">std::false_type</a></td></tr><tr id="fecae0e9-adb3-4cef-b8aa-324eacc7cd85"><td id="CF|d" class=""><code>propagate_on_container_move_assignment</code></td><td id="MlZ{" class="" style="width:456px">Alloc::propagate_on_container_move_assignment if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/integral_constant.html">std::false_type</a></td></tr><tr id="b709336a-ad24-4654-84cc-0901181e0d28"><td id="CF|d" class=""><code>propagate_on_container_swap</code></td><td id="MlZ{" class="" style="width:456px">Alloc::propagate_on_container_swap if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/integral_constant.html">std::false_type</a></td></tr><tr id="bf461f1b-4d85-4e16-a8d6-ad2083baea23"><td id="CF|d" class=""><code>is_always_equal</code>(since C++17)</td><td id="MlZ{" class="" style="width:456px">Alloc::is_always_equal if present, otherwise <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/types/is_empty.html">std::is_empty</a>&lt;Alloc&gt;</td></tr></tbody></table><blockquote id="67aff769-ae30-4050-ba9d-7c1c07bddf27" class="">the template <a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html">std::allocator_traits</a>
 supplies the default implementations for all optional requirements, and all standard library containers and other allocator-aware classes access the allocator through <code>std::allocator_traits</code>
, not directly.</blockquote><p id="fe857263-a073-4181-8d26-b48e6e6bcd9c" class="">
</p><h3 id="16f3506c-4502-4b11-b71c-d5f6d150fc59" class=""><mark class="highlight-brown"><strong>Member functions</strong></mark></h3><table id="84e6ddc8-d185-409b-8de2-d59e9b6dbfb2" class="simple-table"><tbody><tr id="f151714b-939b-4108-ae12-da1e34e78695"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/allocate.html"><strong>allocate</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">allocates uninitialized storage using the allocator(public static member function)</td></tr><tr id="f6380a37-6cc6-41c8-91bd-3cd3bf93de8a"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/deallocate.html"><strong>deallocate</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">deallocates storage using the allocator(public static member function)</td></tr><tr id="51e1feb2-d9bb-4674-9f2b-c1a830c9882d"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/construct.html"><strong>construct</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">constructs an object in the allocated storage(function template)</td></tr><tr id="86e0288e-a5c7-4d63-921f-b6e6ce1d3a5f"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/destroy.html"><strong>destroy</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">destructs an object stored in the allocated storage(function template)</td></tr><tr id="ac3291e1-c230-4d73-9e7b-43a3f0c1e575"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/max_size.html"><strong>max_size</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">returns the maximum object size supported by the allocator(public static member function)</td></tr><tr id="3024ab78-6485-45d2-a8bc-585049880a2f"><td id="VORK" class="" style="width:334px"><a href="https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits/select_on_container_copy_construction.html"><strong>select_on_container_copy_construction</strong></a> [static]</td><td id="|SmG" class="" style="width:897px">obtains the allocator to use after copying a standard container(public static member function)</td></tr></tbody></table><hr id="bfc39db8-70e6-4420-99c8-0ca661ac43e0"/><p id="ad83ef81-f68b-4fe2-b2c6-ebd13df0c91c" class="">
</p><p id="75a3eaca-7cfc-4523-a7bc-98934ce19264" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="16a9085d-7120-4f6d-855f-4d670841853e"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">note: implementing the std::distance is recommended even if it&#x27;s not necessary in the subject but it prevents making your life a hell </div></figure><p id="c17998cf-d8bc-46bb-8785-a15eaf672cfd" class="">
</p><blockquote id="02552df2-3b6b-4173-b3e2-494fa8221fff" class="">with this in mind, I think we have enough knowledge to try and deep dive into the <p id="72557325-8407-41a8-837e-050cb51c36c8" class="">re-implementation of the containers.</p></blockquote><h1 id="f3e02280-7fc2-400b-a950-b21140285347" class=""><a href="https://en.cppreference.com/w/cpp/container/vector"><mark class="highlight-yellow">FT_VECTOR</mark></a><mark class="highlight-yellow"> :</mark></h1><ul id="5b31de0f-523f-4373-ae43-c81ce35c5e4b" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="fc421f82-7633-4191-beb7-d9dba0ba8872" class=""><a href="https://medium.com/@vgasparyan1995/how-to-write-an-stl-compatible-container-fc5b994462c6#:~:text=For%20insertion%20it,time%20(O(1)">https://medium.com/@vgasparyan1995/how-to-write-an-stl-compatible-container-fc5b994462c6#:~:text=For insertion,time (O(1)</a></p><p id="1c41b4a0-17ca-49b1-85df-34184bfd10d6" class=""><a href="https://stackoverflow.com/questions/6296945/size-vs-capacity-of-a-vector#:~:text=Size%20is%20not,what%20they%20want">https://stackoverflow.com/questions/6296945/size-vs-capacity-of-a-vector#:~:text=Size is not, what they want</a></p><p id="769a865a-393f-4c11-aa11-fd5be17f4d1f" class=""><a href="https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/">https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/</a></p></details></li></ul><ul id="608b8905-2c34-43d9-98bd-e8fc286452c8" class="bulleted-list"><li style="list-style-type:disc"><span style="border-bottom:0.05em solid">prototype</span> : <code>template &lt; class T, class Alloc = allocator&lt;T&gt; &gt; class vector;</code></li></ul><p id="8b8c0460-6a33-4b7e-a17b-710e1d8ca484" class="">
</p><p id="3d99ab02-4a5f-4a84-a8b9-817e86b4c2b4" class="">
</p><blockquote id="1d74d3cc-fb9f-41f4-a685-5092ba311830" class="">The <strong>iterators </strong>of <code>vector</code> are of the “<strong>random access</strong>” category:<p id="b9bb3fb7-e8bc-43e5-982e-25543fc4f0c6" class="">→ Random-access iterators are iterators that can be used to access elements at an arbitrary offset position relative to the element they point to, offering the same functionality as pointers.</p><p id="4885410d-95a6-4ed1-802b-cc21f30d9a08" class="">→ Random-access iterators are the most complete iterators in terms of functionality. All <em>pointer types </em>are also valid <em>random-access iterators.</em></p></blockquote><p id="8d0d9542-cfc2-45b4-82a8-ca650aa0cd2e" class="">
</p><h3 id="1d762693-4b63-4a52-b1e3-9d9244cd3ed6" class=""><mark class="highlight-pink_background"><strong>Member types</strong></mark></h3><table id="394a5a19-e335-4d27-8b0e-c56e29ab0610" class="simple-table"><tbody><tr id="9bbe6c6b-ce0f-46f1-a462-3e964d447b09"><td id="]IG@" class="" style="width:259px"><strong>Member type</strong></td><td id="Bt&lt;v" class="" style="width:887px"><strong>Definition</strong></td></tr><tr id="f2a267f5-784b-4554-a8a1-b0ba77b5238c"><td id="]IG@" class="" style="width:259px"><code>value_type</code></td><td id="Bt&lt;v" class="" style="width:887px"><code>T</code></td></tr><tr id="31b9f372-101d-43d4-90eb-c11babf2b055"><td id="]IG@" class="" style="width:259px"><code>allocator_type</code></td><td id="Bt&lt;v" class="" style="width:887px"><code>Allocator</code></td></tr><tr id="08f9c096-40a4-4fa7-bdd5-0d51970b650a"><td id="]IG@" class="" style="width:259px"><code>size_type</code></td><td id="Bt&lt;v" class="" style="width:887px">Unsigned integer type (usually <a href="https://en.cppreference.com/w/cpp/types/size_t">std::size_t</a>)</td></tr><tr id="03ec675f-eee6-4ff4-8d40-fdf5a3f84246"><td id="]IG@" class="" style="width:259px"><code>difference_type</code></td><td id="Bt&lt;v" class="" style="width:887px">Signed integer type (usually <a href="https://en.cppreference.com/w/cpp/types/ptrdiff_t">std::ptrdiff_t</a>)</td></tr><tr id="3f700a78-d1f1-4bed-a80a-4fe0fe99415d"><td id="]IG@" class="" style="width:259px"><code>reference</code></td><td id="Bt&lt;v" class="" style="width:887px">value_type&amp;</td></tr><tr id="da6f5bbe-ec53-4555-809e-bd1ee14a05c6"><td id="]IG@" class="" style="width:259px"><code>const_reference</code></td><td id="Bt&lt;v" class="" style="width:887px">const value_type&amp;</td></tr><tr id="89981a6c-0cd6-48b6-8c18-8e18d0272e84"><td id="]IG@" class="" style="width:259px"><code>pointer</code></td><td id="Bt&lt;v" class="" style="width:887px"><code>Allocator::pointer</code>(until C++11)<a href="http://en.cppreference.com/w/cpp/memory/allocator_traits">std::allocator_traits</a>&lt;Allocator&gt;::pointer(since C++11)</td></tr><tr id="e76e8662-458c-4eaa-a577-96685091b0ce"><td id="]IG@" class="" style="width:259px"><code>const_pointer</code></td><td id="Bt&lt;v" class="" style="width:887px"><code>Allocator::const_pointer</code>(until C++11)<a href="http://en.cppreference.com/w/cpp/memory/allocator_traits">std::allocator_traits</a>&lt;Allocator&gt;::const_pointer(since C++11)</td></tr><tr id="9a2eb956-7b27-428c-a68c-fb081ee745d1"><td id="]IG@" class="" style="width:259px"><code>iterator</code></td><td id="Bt&lt;v" class="" style="width:887px"><a href="https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator"><em>LegacyRandomAccessIterator</em></a> and <a href="https://en.cppreference.com/w/cpp/named_req/ContiguousIterator"><em>LegacyContiguousIterator</em></a> to <code>value_type</code>(until C++20)<a href="https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator"><em>LegacyRandomAccessIterator</em></a>, <a href="https://en.cppreference.com/w/cpp/iterator/contiguous_iterator"><code>contiguous_iterator</code></a>, and <a href="https://en.cppreference.com/w/cpp/named_req/ConstexprIterator"><em>ConstexprIterator</em></a> to <code>value_type</code>(since C++20)</td></tr><tr id="0f93dff1-2274-43e2-84b9-04ae940ca53a"><td id="]IG@" class="" style="width:259px"><code>const_iterator</code></td><td id="Bt&lt;v" class="" style="width:887px"><a href="https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator"><em>LegacyRandomAccessIterator</em></a> and <a href="https://en.cppreference.com/w/cpp/named_req/ContiguousIterator"><em>LegacyContiguousIterator</em></a> to <code>const value_type</code>(until C++20)<a href="https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator"><em>LegacyRandomAccessIterator</em></a>, <a href="https://en.cppreference.com/w/cpp/iterator/contiguous_iterator"><code>contiguous_iterator</code></a>, and <a href="https://en.cppreference.com/w/cpp/named_req/ConstexprIterator"><em>ConstexprIterator</em></a> to <code>const value_type</code>(since C++20)</td></tr><tr id="4daa1c5e-a439-493e-80ca-c356f13d1f94"><td id="]IG@" class="" style="width:259px"><code>reverse_iterator</code></td><td id="Bt&lt;v" class="" style="width:887px"><a href="http://en.cppreference.com/w/cpp/iterator/reverse_iterator">std::reverse_iterator</a>&lt;iterator&gt;</td></tr><tr id="6e71fef4-557e-4076-8e12-6b2a97fb5214"><td id="]IG@" class="" style="width:259px"><code>const_reverse_iterator</code></td><td id="Bt&lt;v" class="" style="width:887px"><a href="http://en.cppreference.com/w/cpp/iterator/reverse_iterator">std::reverse_iterator</a>&lt;const_iterator&gt;</td></tr></tbody></table><h3 id="106e7ca3-69c8-4fa9-aef4-10a856aacb1e" class=""><mark class="highlight-pink_background"><strong>Member functions</strong></mark></h3><table id="9e0c956e-0684-4a69-975e-087778816920" class="simple-table"><tbody><tr id="1447236a-b725-4c61-a220-4357cb7e81c6"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/vector">(constructor)</a></td><td id="wogu" class="" style="width:707px">constructs the <code>vector</code>(public member function)</td></tr><tr id="012ad69a-015d-4965-836d-22cd81f271db"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/~vector">(destructor)</a></td><td id="wogu" class="" style="width:707px">destructs the <code>vector</code>(public member function)</td></tr><tr id="7f700634-d921-4c45-ac8c-f276b47e00bc"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/operator%3D"><strong>operator=</strong></a></td><td id="wogu" class="" style="width:707px">assigns values to the container(public member function)</td></tr><tr id="e02856c7-1f26-4194-ac0b-0f6ecbe3df4d"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/assign"><strong>assign</strong></a></td><td id="wogu" class="" style="width:707px">assigns values to the container(public member function)</td></tr><tr id="04b7c292-e44e-4537-82ae-680ff6937c26"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/get_allocator"><strong>get_allocator</strong></a></td><td id="wogu" class="" style="width:707px">returns the associated allocator(public member function)</td></tr><tr id="88db3645-0275-47a0-81f1-d453559be3a1"><td id="|imt" class="block-color-red" style="width:273px"><strong><strong>Element access</strong></strong></td><td id="wogu" class="block-color-red" style="width:707px"></td></tr><tr id="250b3608-ee58-4844-9c37-e87f1c9d25f8"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/at"><strong>at</strong></a></td><td id="wogu" class="" style="width:707px">access specified element with bounds checking(public member function)</td></tr><tr id="865535d9-8611-4bb1-bd7d-b8e7b44eaf0d"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/operator_at"><strong>operator[]</strong></a></td><td id="wogu" class="" style="width:707px">access specified element(public member function)</td></tr><tr id="6d5ae674-ac1e-467f-8e50-fa90208cc42b"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/front"><strong>front</strong></a></td><td id="wogu" class="" style="width:707px">access the first element(public member function)</td></tr><tr id="81cac4df-d159-444d-8a40-2779a785e172"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/back"><strong>back</strong></a></td><td id="wogu" class="" style="width:707px">access the last element(public member function)</td></tr><tr id="18b43c02-2f1f-4d2e-9cae-0186e432f2e1"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/data"><strong>data</strong></a></td><td id="wogu" class="" style="width:707px">direct access to the underlying array(public member function)</td></tr><tr id="cd5f795e-2d9a-40f2-b149-a6998ce21a62"><td id="|imt" class="block-color-red" style="width:273px"><strong><strong>Iterators</strong></strong></td><td id="wogu" class="block-color-red" style="width:707px"></td></tr><tr id="7c8ab4d1-9e37-4f29-98e8-bd70fb2387f2"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/begin"><strong>begin cbegin</strong></a>(C++11)</td><td id="wogu" class="" style="width:707px">returns an iterator to the beginning(public member function)</td></tr><tr id="45bb01ab-a26d-4637-8661-f73dd01a6fe8"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/end"><strong>endcend</strong></a>(C++11)</td><td id="wogu" class="" style="width:707px">returns an iterator to the end(public member function)</td></tr><tr id="da23edeb-71fd-4b4b-b67b-b05759aa12cd"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/rbegin"><strong>begin crbegin</strong></a>(C++11)</td><td id="wogu" class="" style="width:707px">returns a reverse iterator to the beginning(public member function)</td></tr><tr id="a7752ce8-6e56-4745-a201-611be318b49e"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/rend"><strong>rend crend</strong></a>(C++11)</td><td id="wogu" class="" style="width:707px">returns a reverse iterator to the end(public member function)</td></tr><tr id="a9de206c-c8bb-4ebd-a540-e92879ca7568"><td id="|imt" class="" style="width:273px"><strong><strong>Capacity</strong></strong></td><td id="wogu" class="" style="width:707px"></td></tr><tr id="ec351124-ab59-438c-a439-6342a3ab0a2d"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/empty"><strong>empty</strong></a></td><td id="wogu" class="" style="width:707px">checks whether the container is empty(public member function)</td></tr><tr id="a4b6bfac-60f3-4aed-b1c0-6d6e6bb89f11"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/size"><strong>size</strong></a></td><td id="wogu" class="" style="width:707px">returns the number of elements(public member function)</td></tr><tr id="1ba2e48b-8590-438e-ba17-bbf9672ae2b0"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/max_size"><strong>max_size</strong></a></td><td id="wogu" class="" style="width:707px">returns the maximum possible number of elements(public member function)</td></tr><tr id="a9d93763-eee7-44de-a37f-af6db7c27c39"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/reserve"><strong>reserve</strong></a></td><td id="wogu" class="" style="width:707px">reserves storage(public member function)</td></tr><tr id="4a136d72-41fd-4f24-8c7c-61c6c6406783"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/capacity"><strong>capacity</strong></a></td><td id="wogu" class="" style="width:707px">returns the number of elements that can be held in currently allocated storage(public member function)</td></tr><tr id="81759aae-bfca-4557-930c-0fb94dadb324"><td id="|imt" class="block-color-red" style="width:273px"><strong><strong>Modifiers</strong></strong></td><td id="wogu" class="block-color-red" style="width:707px"></td></tr><tr id="a2413fca-eb4e-436d-b2cf-d01e90800431"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/clear"><strong>clear</strong></a></td><td id="wogu" class="" style="width:707px">clears the contents(public member function)</td></tr><tr id="3ffba696-487f-4e6d-9d04-ad4ab09c77c2"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/insert"><strong>insert</strong></a></td><td id="wogu" class="" style="width:707px">inserts elements(public member function)</td></tr><tr id="6a2e626d-3d13-4179-85a1-bfb03fcfebe3"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/erase"><strong>erase</strong></a></td><td id="wogu" class="" style="width:707px">erases elements(public member function)</td></tr><tr id="dd8d5ba7-fd7c-4387-97bb-0bcc749e2dd5"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/push_back"><strong>push_back</strong></a></td><td id="wogu" class="" style="width:707px">adds an element to the end(public member function)</td></tr><tr id="bedd47de-56fd-4ad8-9e85-a6443bbdac37"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/pop_back"><strong>pop_back</strong></a></td><td id="wogu" class="" style="width:707px">removes the last element(public member function)</td></tr><tr id="0cc12da3-22de-4aaa-a63a-f121d1ec4d8a"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/resize"><strong>resize</strong></a></td><td id="wogu" class="" style="width:707px">changes the number of elements stored(public member function)</td></tr><tr id="065308cc-2e92-4e23-a74f-1f25ace12f27"><td id="|imt" class="" style="width:273px"><a href="https://en.cppreference.com/w/cpp/container/vector/swap"><strong>swap</strong></a></td><td id="wogu" class="" style="width:707px">swaps the contents(public member function)</td></tr></tbody></table><h3 id="68b4da1e-d025-4a01-a2a9-a8ab59a9f953" class=""><mark class="highlight-pink_background"><strong>Non-member functions</strong></mark></h3><table id="5bd15898-ed44-4b0f-b884-3840b3280d73" class="simple-table"><tbody><tr id="364125df-8400-411b-8561-fd38e7d397de"><td id="HVhW" class="" style="width:538px"><a href="https://en.cppreference.com/w/cpp/container/vector/operator_cmp"><strong>operator==operator!=operator&lt;operator&lt;=operator&gt;operator&gt;=operator&lt;=&gt;</strong></a></td><td id="^JaS" class="" style="width:466px">lexicographically compares the values in the vector(function template)</td></tr><tr id="faa3028e-d810-42a8-9d44-edfffd7f2b43"><td id="HVhW" class="" style="width:538px"><a href="https://en.cppreference.com/w/cpp/container/vector/swap2"><strong>std::swap(std::vector)</strong></a></td><td id="^JaS" class="" style="width:466px">specializes the <a href="https://en.cppreference.com/w/cpp/algorithm/swap">std::swap</a> algorithm(function template)</td></tr></tbody></table><p id="9828cef5-0520-4669-af84-f701171e4928" class="">
</p><h1 id="cf084eda-6877-49df-878c-fe2c55ec90b7" class=""><a href="https://en.cppreference.com/w/cpp/container/stack"><mark class="highlight-yellow">FT_STACK</mark></a><mark class="highlight-yellow"> :</mark></h1><ul id="f742d1a0-0cc2-4026-ac48-d5941b38613d" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><p id="18d1c678-5df7-4631-88b1-cefce0427088" class=""><a href="https://en.cppreference.com/w/cpp/container/stack">https://en.cppreference.com/w/cpp/container/stack</a></p><p id="a28f2d43-c65d-4b08-815d-502941b22d85" class=""><a href="https://stackoverflow.com/questions/3873802/what-are-containers-adapters-c#:~:text=values%20in%20it.-,Container%20Adapters,-Container%20adapters%2C%20on">https://stackoverflow.com/questions/3873802/what-are-containers-adapters-c#:~:text=values in it.-,Container Adapters,-Container adapters%2C on</a></p></details></li></ul><blockquote id="cbba2540-92ee-4da1-9996-356daf15028d" class="">The std::stack class is a container adapter. Container objects hold data of a similar data type. You can create a stack from various sequence containers. If no container is provided, the deque contains will be used by default. Container adapters don’t support iterators, so they can’t be used to manipulate data.</blockquote><blockquote id="6883c7b8-99c0-4e2c-ab2c-ab5d8ee79989" class="">the std::stack is built on top of the std::vector as an underlying container <p id="69f558c3-5123-4d1f-b94a-2c02bfb0e557" class="">so most of its member functions are just a call to the underlying container’s member functions</p></blockquote><h3 id="d892b491-b63d-4e91-8a5b-0e986f2a90eb" class=""><mark class="highlight-purple_background"><strong>Member types</strong></mark></h3><table id="3b6db313-2600-4fe4-959d-4dea2c367aa7" class="simple-table"><tbody><tr id="22c6cd27-327a-4940-b6ea-01913597449a"><td id="zSJr" class=""><strong>Member type</strong></td><td id="woGI" class="" style="width:419.796875px"><strong>Definition</strong></td></tr><tr id="b73e6d7a-ab4f-48f8-b626-733ed3b5ef81"><td id="zSJr" class=""><code>container_type</code></td><td id="woGI" class="" style="width:419.796875px"><code>Container</code></td></tr><tr id="71b5f69c-f6e6-4690-94df-887a4c010308"><td id="zSJr" class=""><code>value_type</code></td><td id="woGI" class="" style="width:419.796875px"><code>Container::value_type</code></td></tr><tr id="328e7db8-1d03-4c2b-a075-48658a65f400"><td id="zSJr" class=""><code>size_type</code></td><td id="woGI" class="" style="width:419.796875px"><code>Container::size_type</code></td></tr><tr id="1b63e3f7-d576-47c6-85dd-ea1213471297"><td id="zSJr" class=""><code>reference</code></td><td id="woGI" class="" style="width:419.796875px"><code>Container::reference</code></td></tr><tr id="897b6ab3-f2b8-488c-ba2c-a5e96c3d6d7b"><td id="zSJr" class=""><code>const_reference</code></td><td id="woGI" class="" style="width:419.796875px"><code>Container::const_reference</code></td></tr></tbody></table><h3 id="9b1a0a0c-befa-4cdb-9612-70844131c064" class=""><mark class="highlight-purple_background"><strong>Member functions</strong></mark></h3><table id="865023d7-1ed8-46a6-bf18-5d1c495ba57d" class="simple-table"><tbody><tr id="678e9450-6aba-4de8-8186-b97db48cbf98"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/stack">(constructor)</a></td><td id="UHCq" class="" style="width:547px">constructs the <code>stack</code>(public member function)</td></tr><tr id="b8eed5a1-e43d-4d0b-92c7-fc7af16fff9d"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/~stack">(destructor)</a></td><td id="UHCq" class="" style="width:547px">destructs the <code>stack</code>(public member function)</td></tr><tr id="1f2f8e1a-441a-4867-bf86-78a0b1513dc9"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/operator%3D"><strong>operator=</strong></a></td><td id="UHCq" class="" style="width:547px">assigns values to the container adaptor(public member function)</td></tr><tr id="dc042770-0949-4997-960b-79cfb5fb797d"><td id="U=^p" class="" style="width:165.921875px"><mark class="highlight-red"><strong><strong>Element access</strong></strong></mark></td><td id="UHCq" class="" style="width:547px"></td></tr><tr id="6c72d5d3-39f8-4fde-aa4f-c31939dfc33b"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/top"><strong>top</strong></a></td><td id="UHCq" class="" style="width:547px">accesses the top element(public member function)</td></tr><tr id="d23f70a9-c490-4408-b295-2ca2bafca047"><td id="U=^p" class="" style="width:165.921875px"><strong><strong>Capacity</strong></strong></td><td id="UHCq" class="" style="width:547px"></td></tr><tr id="914edc56-9957-458c-93f5-3214aabce236"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/empty"><strong>empty</strong></a></td><td id="UHCq" class="" style="width:547px">checks whether the underlying container is empty(public member function)</td></tr><tr id="8035719d-f746-4ef0-903f-7259b6fbea18"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/size"><strong>size</strong></a></td><td id="UHCq" class="" style="width:547px">returns the number of elements(public member function)</td></tr><tr id="61b85d39-5d57-4592-8139-01530f376153"><td id="U=^p" class="" style="width:165.921875px"><mark class="highlight-red"><strong><strong>Modifiers</strong></strong></mark></td><td id="UHCq" class="" style="width:547px"></td></tr><tr id="c36a25e0-1831-4393-828e-214b1c1bd828"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/push"><strong>push</strong></a></td><td id="UHCq" class="" style="width:547px">inserts element at the top(public member function)</td></tr><tr id="8ebcd4d4-24c0-416b-b8ed-6aaf6f2fa577"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/pop"><strong>pop</strong></a></td><td id="UHCq" class="" style="width:547px">removes the top element(public member function)</td></tr><tr id="cf47ee79-164a-4136-95e8-0c992e16c9ee"><td id="U=^p" class="" style="width:165.921875px"><a href="https://en.cppreference.com/w/cpp/container/stack/swap"><strong>swap</strong></a>(C++11)</td><td id="UHCq" class="" style="width:547px">swaps the contents(public member function)</td></tr></tbody></table><p id="dce54ff8-b89a-4640-9c75-53c2ed0db976" class=""><mark class="highlight-purple_background"><strong><strong>Member objects</strong></strong></mark></p><table id="a4ee40a7-a053-45d7-991d-cd3714c433de" class="simple-table"><tbody><tr id="fb677416-d7c2-44d2-910d-20dff01e4591"><td id="~cqL" class=""><strong>Container c</strong></td><td id="pZsk" class="">the underlying container(protected member object)</td></tr></tbody></table><h3 id="564c5307-d175-40a2-ba22-73bf6e3167a3" class=""><mark class="highlight-purple_background"><strong>Non-member functions</strong></mark></h3><table id="58257bed-60af-42d4-87eb-af5a0e302f82" class="simple-table"><tbody><tr id="a9b62a4a-24a0-4ba2-a3a8-9b6ae25f16c9"><td id="b`n=" class="" style="width:233px"><a href="https://en.cppreference.com/w/cpp/container/stack/operator_cmp"><strong>operator==operator!=operator&lt;operator&lt;=operator&gt;operator&gt;=operator&lt;=&gt;</strong></a></td><td id="Wi^D" class="" style="width:281px">lexicographically compares the values in the stack(function template)</td></tr><tr id="a6c51484-5bb8-4331-82dc-f11d99ccb05f"><td id="b`n=" class="" style="width:233px"><a href="https://en.cppreference.com/w/cpp/container/stack/swap2"><strong>std::swap(std::stack)</strong></a></td><td id="Wi^D" class="" style="width:281px">specializes the <a href="https://en.cppreference.com/w/cpp/algorithm/swap">std::swap</a> algorithm(function template)</td></tr></tbody></table><p id="bb559957-3b85-402a-b49d-60ec6a65dd86" class="">
</p><p id="e34c6ea0-9ac1-4a30-9158-3a5ec0305963" class="">
</p><h1 id="71d3e556-f7ad-4242-94b7-9e1105c89f2c" class=""><mark class="highlight-red">RED-BLACK-TREE</mark></h1><p id="b5ff416f-5cf1-488a-99e4-94a3a978f77d" class=""><div class="indented"><figure id="f4806286-e367-47b5-8a28-94992c3e6a00" class="image"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/0_ilyr9n3l4OGhjdk9.png"><img style="width:1280px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/0_ilyr9n3l4OGhjdk9.png"/></a></figure><p id="48ff604a-fe99-46c2-915f-c930e0f53b0e" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="5c9eae9f-01f6-4bd0-8624-f9f7e97d8cc2"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">I highly recommend learning about binary search trees unless you wanna get overwhelmed 
here’s a resource where to learn it :
 <a href="https://www.softwaretestinghelp.com/binary-search-tree-in-cpp/#:~:text=A%20Binary%20Search%20Tree%20or,right%20children%20of%20the%20BST">https://www.softwaretestinghelp.com/binary-search-tree-in-cpp/#:~:text=A Binary Search Tree or, right children of the BST</a>. 
u can refer to any other resource u find, it’s really simple, good luck </div></figure><p id="f3de4681-900a-4454-aecd-89da47bed27b" class="">
</p><p id="9cc0b93e-b2eb-48cb-b5fe-4e3d9c9b178d" class="">
</p></div></p><p id="b0cb970e-9bf1-4397-9cce-35689f7d0e2b" class=""><mark class="highlight-red"><strong><strong>Problems with Binary Search Tree : </strong></strong></mark><div class="indented"><p id="005bf48a-d7d5-4fdd-a596-ceef04b19de9" class="">For Binary Search Tree, although the average time complexity for the search, insertion, and deletion are all O(log n), where <strong>n </strong>is the number of nodes in the tree, the time complexity becomes O(n) in the worst case - BST is not balanced.</p><figure id="35c5f6d7-b745-4ee8-9f47-166b17208f24" class="image"><a href="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/bst.png"><img style="width:1740px" src="THE%20ULTIMATE%20GUIDE%20e7f20768377544409ca8d036b1ab9b7f/bst.png"/></a></figure></div></p><p id="f7978253-a87a-4b60-9e84-2446a050a549" class="">
</p><p id="bd5d51a4-d349-4d36-abc9-9e9e696d91d7" class="">We can guarantee O(log⁡n) time for all three operations by using a balanced tree - a tree that always has height <code>log(n)</code>.</p><p id="0d963231-1646-4b60-9f63-4562c89e1976" class="">
</p><p id="a2e37556-8a80-49a7-84d9-48964bf49e9d" class="">
</p><p id="06fcc0ff-68ea-440b-8563-d805465a08dc" class=""><mark class="highlight-brown">so, what is a red-black tree? </mark></p><blockquote id="2f2767ea-c433-4b6c-a126-ca8505971d25" class="">A red-black tree is a self-balancing binary search tree, that is, a binary search tree that automatically maintains some balance.</blockquote><blockquote id="cca73550-9596-4057-856f-daeda535ecec" class="">Red-black trees are an evolution of binary search trees that aim to keep the tree balanced without affecting the complexity of the primitive operations. This is done by coloring each node in the tree with either red or black and preserving a set of properties that guarantee that the deepest path in the tree is not longer than twice the shortest one.</blockquote><p id="78125625-d853-4955-ae95-29c3eedc19e0" class="">
</p><p id="56b839e1-d116-4f33-be5b-8318e9c304db" class="">to achieve that balance there are rules that should be respected :</p><ul id="33660dc1-9804-4455-8b5e-bf962edc80e7" class="bulleted-list"><li style="list-style-type:disc"><code>Color property</code>: Each node has a color (red or black) associated with it (in addition to its key, left and right children).</li></ul><ul id="77034902-5346-4dab-947b-a359f1faf441" class="bulleted-list"><li style="list-style-type:disc"><code>Root property</code>: The root of the red-black tree is black.</li></ul><ul id="c75df7d0-b4bf-43df-ab3a-8b2439030b87" class="bulleted-list"><li style="list-style-type:disc"><code>Red property</code>: The children of a red node are black.</li></ul><ul id="88591b8b-e081-49ca-8ab2-bf834078bba3" class="bulleted-list"><li style="list-style-type:disc"><code>Black property</code>: For each node with at least one null child, the number of black nodes on the path from the root to the null child is the same.</li></ul><p id="b746889b-03bc-4549-9185-ce9fd96f3f1a" class="">
</p><p id="401ca5ef-0f80-4f8c-a189-bfd58d005296" class="">
</p><p id="e0ac7ac0-9064-4c2d-8589-f59f9d295156" class="">
</p><p id="86286c83-8814-463a-baa9-698a949fb567" class="">
</p><p id="51622c17-bf70-4c18-b769-c2a1b025a820" class="">
</p></div></article></body></html>