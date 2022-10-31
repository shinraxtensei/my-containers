# ft_containers
this project is meant to recreate some of the C++ STL containers (vector , stack , set and map)


****************************************************************************************************************************
![exception](https://user-images.githubusercontent.com/48833654/198960528-2d5781ea-c4a9-4163-96f7-c244a36d7e83.jpeg)
<img width="970" alt="Screen Shot 2022-10-26 at 9 17 17 AM" src="https://user-images.githubusercontent.com/48833654/198960535-4df63895-7ddd-4bde-848f-5f98e46d075d.png">






<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>docs</title><style>
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
	
</style></head><body><article id="e7f20768-3775-4440-9ca8-d036b1ab9b7f" class="page sans"><header><div class="page-header-icon undefined"><span class="icon">📍</span></div><h1 class="page-title">docs</h1></header><div class="page-body"><h2 id="8713e342-ac20-4176-afbf-817a90fa89c4" class=""><mark class="highlight-purple_background">let’s talk about some essential concepts before diving into the actual implementation of containers : </mark></h2><h1 id="9ba6fe87-bcef-486f-be27-e092ccdd740b" class=""><mark class="highlight-red">1 -</mark> <mark class="highlight-red">exception safety and RAII</mark></h1><ul id="9fbc339c-5d96-4d19-b29b-b2f0bc7e038f" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><ul id="c3d0acb7-5701-4150-ae7d-3f87d9aeb180" class="bulleted-list"><li style="list-style-type:disc"><a href="https://en.wikipedia.org/wiki/Call_stack#Unwinding">https://en.wikipedia.org/wiki/Call_stack#Unwinding</a></li></ul><ul id="f9050951-9121-48cc-bf7c-80278f829abf" class="bulleted-list"><li style="list-style-type:disc"><a href="https://scvgoe.github.io/2019-07-06-Exception-Safety/">https://scvgoe.github.io/2019-07-06-Exception-Safety/</a></li></ul><ul id="dae76c37-1bc3-4c55-959e-1df1122c9c08" class="bulleted-list"><li style="list-style-type:disc"><a href="https://www.boost.org/community/exception_safety.html">https://www.boost.org/community/exception_safety.html</a></li></ul></details></li></ul><h3 id="fc91c058-31e6-4a25-b217-94366728f5e3" class="">so what is exception safety?</h3><p id="304354bb-29c3-4bb2-8101-c7b08b8d8afe" class="">before I answer that I should first introduce to you an important concept which is stack unwinding</p><h3 id="f9b16a5c-5125-4471-8b15-606a20904d16" class=""><mark class="highlight-orange">stack unwinding :</mark></h3><blockquote id="9ce99760-4874-489e-9f1f-21dcf271af19" class="">when a function is called, information about that routine gets stacked up on <strong>the call stack inside a frame. Each function(subroutine) gets its own frame with whatever information instruction needs the CPU to execute that function.</strong></blockquote><blockquote id="8f54ecaa-f620-487a-b3ef-44aa7a8e10f5" class="">now when the function finishes its execution, its frame gets destroyed and the CPU executes the next function in a FILO order </blockquote><div id="e9e5d032-5099-420e-bb9c-39812fe6600b" class="column-list"><div id="872e9959-961e-43f0-b3aa-41592e8b9275" style="width:43.75%" class="column"><blockquote id="cbeb43fc-4e6b-4b33-a997-791a07f4d1a9" class="">When an exception occurs while a function is in progress on the stack, it returns to the call stack by finding the catch block, it just keeps returning through the execution path. resulting in the destruction of the function frame.</blockquote><blockquote id="c5d579b6-7ad1-4ac0-a5a2-8316cb8eecaf" class="block-color-gray_background">if there is any <mark class="highlight-red">memory allocated</mark> before the exception throw, <mark class="highlight-red">memory leaks</mark> will occur </blockquote><p id="9721b3f4-31b0-4e4c-9f1a-bf92acd09b2c" class="">
</p></div><div id="6e21c825-e5ea-45c2-81c4-4396fa6cf83c" style="width:56.25%" class="column"><figure id="7abbce2d-ef06-4e14-9652-9d0e0d4702ac" class="image" style="text-align:center"><a href="docs%20e7f20768377544409ca8d036b1ab9b7f/exception.jpeg"><img style="width:700px" src="docs%20e7f20768377544409ca8d036b1ab9b7f/exception.jpeg"/></a></figure><p id="9faf1f54-e875-4be7-be43-896d1aabf3d3" class="">
</p><p id="3d53053b-8de8-416c-9a38-2b77d6940a2d" class="">
</p></div></div><figure id="87896c31-e63c-4f0e-a1ed-8428dd4aa1dc" class="image"><a href="docs%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-26_at_9.17.17_AM.png"><img style="width:528px" src="docs%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-26_at_9.17.17_AM.png"/></a></figure><p id="2dfeaedd-ee94-473e-822e-7488cfae448e" class="">
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
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="a9ef47aa-b3a4-4e2b-b45d-be387ff900a5"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">when we talk about resources it can be allocated heap memory, a thread of execution, open socket, open file, locked mutex, …</div></figure><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="75d048c2-275a-4263-b50f-c8037b30309a"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Another name for this technique is <em>Scope-Bound Resource Management</em>
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
</p></details></li></ul></li></ul></li></ul></div></p><ul id="075d1395-d429-40a3-916e-787689943b23" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">3  </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/template_argument_deduction">template argument deduction</a></mark><p id="10495fb1-9edf-447a-b4ab-021f45774764" class=""> - at this point,  Template functions are untyped and need to be instantiated.</p><p id="b8e87ce8-7636-437a-98cb-673596bb1792" class=""> - A template function is instantiated, either explicitly or implicitly, but not always all arguments of the template are determined.</p><p id="28cba8ff-ff92-4e16-b7da-1f5f459902aa" class=""> - At this point, if possible, the compiler deduces the template argument.</p><p id="2911e313-3d80-4e64-b0f8-39f5a4b78199" class=""> - In this way, a candidate function set is created, and more than one function can be a candidate.</p></li></ul><p id="396c8473-3fd6-47e3-acef-79809d135b3a" class=""><mark class="highlight-brown">4 • </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution">template argument substitution</a></mark></p><ul id="83e06f74-f301-481d-a7b7-e47575596c7d" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown"> </mark>7 - Substitute function arguments in the list, but if there is a problem with the type or expression, the substitution fails</li></ul><ul id="72a6fdf6-3573-47ef-987e-cf32b411762c" class="bulleted-list"><li style="list-style-type:disc">8 - <strong>When substitution fails, it does not generate a compile error and works by excluding the candidate function from the candidate group! (SFINAE)</strong></li></ul><ul id="ecf69a99-e6b6-4674-9053-aed30c141735" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-brown">5 - </mark><mark class="highlight-brown"><a href="https://en.cppreference.com/w/cpp/language/overload_resolution">overload resolution</a></mark><ul id="03b0f2b1-082b-44b2-9d59-f8d2068868de" class="bulleted-list"><li style="list-style-type:circle"> Find the function actually called through overload resolution!</li></ul></li></ul><p id="98e0255b-0d06-4e7f-b254-13fa1caf6aa2" class="">
</p><ul id="8f11c90a-abc4-401d-ae69-54983fe1b0af" class="bulleted-list"><li style="list-style-type:disc"><mark class="highlight-teal">  At this time, the function candidates are </mark><mark class="highlight-teal"><code>candidate functions </code></mark><mark class="highlight-teal">called, and the function actually called </mark><mark class="highlight-teal"><code>viable function </code></mark><mark class="highlight-teal">is called!</mark></li></ul><p id="b2382510-df96-4097-9892-998ccd1da09e" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="849632f3-355c-41ae-84c4-d6f3163bf716"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%"><mark class="highlight-red">SFINAE</mark> applies during overload resolution of function templates: When <a href="https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution">substituting</a>
 the explicitly specified or <a href="https://en.cppreference.com/w/cpp/language/template_argument_deduction">deduced type</a> for the template parameter fails, the specialization is discarded from the <a href="https://en.cppreference.com/w/cpp/language/overload_resolution">overload set</a>, instead of causing a compile error.</div></figure><p id="b163a04b-fa7b-4a67-8fb0-be7b29250d06" class=""><div class="indented"><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="8dfd6693-c0aa-48a8-9da8-5d4284cf7aee"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%"><strong>Substitution failure is not an error</strong> (<strong>SFINAE</strong>) refers to a situation in <a href="https://en.wikipedia.org/wiki/C%2B%2B">C++</a> where an invalid substitution of <a href="https://en.wikipedia.org/wiki/Template_(C%2B%2B)">template</a> parameters is not in itself an error. David Vandevoorde first introduced the acronym SFINAE to describe related programming techniques.<a href="https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-1">[1]</a><p id="a7764c5d-71ef-456a-b33b-75fc62c7e0a3" class="">Specifically, when creating a candidate set for <a href="https://en.wikipedia.org/wiki/Overload_resolution">overload resolution</a>, some (or all) candidates of that set may be the result of instantiated templates with (potentially deduced) template arguments substituted for the corresponding template parameters. If an error occurs during the substitution of a set of arguments for any given template, the compiler removes the potential overload from the candidate set instead of stopping with a compilation error, provided the substitution error is one the C++ standard grants such treatment.<a href="https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-2">[2]</a> If one or more candidates remain and overload resolution succeeds, the invocation is well-formed.</p></div></figure></div></p><p id="3f7c8446-186d-45e8-9d64-ac62b9402acc" class="">
</p><blockquote id="4ad474f9-d016-4c2b-aefc-4a3d574731ba" class=""><mark class="highlight-pink">in the next section, we will see how we can use SFINAE to our advantage, through type traits, and tag dispatching ….</mark></blockquote><p id="e6324026-4018-419d-999b-31e0a4d40585" class="">
</p><h1 id="0aef42bc-d3fc-42bd-b798-456d65780e5c" class=""><mark class="highlight-red">3- Type Traits / Tag dispatching …</mark></h1><p id="b8c29432-c577-4e5f-bd61-a5fe6826d77c" class=""><div class="indented"><h2 id="13bfbc55-4afa-41f7-aaec-b2e378f74db0" class=""><mark class="highlight-blue">Type Traits :</mark></h2><ul id="b8aa6306-2c09-4094-8b42-fdf41b009859" class="toggle"><li><details open=""><summary><mark class="highlight-blue">resources</mark></summary><figure id="d76e1d8f-e129-486e-b8b5-2dfa7d7585b2"><a href="https://www.internalpointers.com/post/quick-primer-type-traits-modern-cpp" class="bookmark source"><div class="bookmark-info"><div class="bookmark-text"><div class="bookmark-title">A quick primer on type traits in modern C++</div><div class="bookmark-description">Type traits are a clever technique used in C++ template metaprogramming that gives you the ability to inspect and transform the properties of types. For example, given a generic type T - it could be int, bool, std::vector or whatever you want - with type traits you can ask the compiler some questions: is it an integer?</div></div><div class="bookmark-href"><img src="https://www.internalpointers.com/img/favicon.ico" class="icon bookmark-icon"/>https://www.internalpointers.com/post/quick-primer-type-traits-modern-cpp</div></div><img src="https://raw.githubusercontent.com/monocasual/internalpointers-files/master/2020/01/type-traits-modern-cpp.png" class="bookmark-image"/></a></figure><p id="959aee3a-7d56-4f74-bbaa-3d660079a650" class=""><a href="https://dev.to/sandordargo/what-are-type-traits-in-c-18j5">https://dev.to/sandordargo/what-are-type-traits-in-c-18j5</a></p><p id="4ba5c7dd-ce77-425e-9496-1f0aa5b020ab" class=""><a href="https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm">https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm</a></p></details></li></ul><p id="771ce5ce-6931-404c-b1da-5f25251cb2b7" class="">
</p><p id="08772abb-dd1c-4bb2-9606-7604a3b96102" class=""><mark class="highlight-pink_background">so what are type traits? </mark></p><p id="be1a0be0-b99f-4981-aeeb-224779927566" class=""><mark class="highlight-purple">let&#x27;s start with what is a trait. </mark><div class="indented"><blockquote id="0b95f0be-c190-43bc-b52b-ca662f1e4d0b" class="">a <em>trait</em> is &quot;a particular characteristic that can produce a particular type of behavior&quot;. Or simply &quot;a characteristic, especially of a personality&quot;.</blockquote><blockquote id="c0ca6cc6-7c94-4950-9dba-dd166345a8b0" class="">we can think about type traits as properties of a type .</blockquote></div></p><p id="0bf001e6-cf61-444f-a2f7-5896106d3cfe" class="">you&#x27;d often need the information on what kind of types are accepted by a template, and what types are supported by certain operations. While concepts are much superior in terms of expressiveness or usability, with type traits you could already introduce compile-time conditions on what should be accepted as valid code and what not.</p><p id="40f02366-e00f-45ac-a444-43df5d4cfad3" class="">Though <em>type traits</em> can help with even more. With their help, you can also add or remove the <code>const</code> specifier, you can turn a pointer or a reference into a value, and so on….</p><p id="332f2f9a-a4ff-45a2-8eed-820d157ef876" class="">
</p><blockquote id="8e92456a-1659-442c-8540-80d3665ee113" class=""><strong>Type traits</strong> are a clever technique used in C++ template metaprogramming that gives you the ability to inspect and transform the properties of <em>types</em>.</blockquote><blockquote id="bbb8d3d5-520e-4b68-ac57-9ffbd74085f3" class="">For example, given a generic type <code>T</code> — it could be <code>int</code>, <code>bool</code>, <code>std::vector</code>, or whatever you want — with type traits you can ask the compiler some questions: is it an integer? Is it a function? Is it a pointer? Or maybe a class? Does it have a destructor? Can you copy it? Will it throw exceptions? ... and so on. This is extremely useful in <strong>conditional compilation</strong>, where you instruct the compiler to pick the right path according to the type in input. We will see an example shortly.</blockquote><p id="c9db8419-a923-425a-8bd9-9f4e8d18a79c" class="">
</p><figure class="block-color-gray_background callout" style="white-space:pre-wrap;display:flex" id="6172c4b9-9732-49a0-890b-2ffa3427257c"><div style="font-size:1.5em"><span class="icon">💡</span></div><div style="width:100%">Generic programming (writing code that works with any data type meeting a set of requirements) has become the method of choice for providing reusable code. However, there are times in generic programming when &quot;generic&quot; just isn&#x27;t good enough - sometimes the differences between types are too large for an efficient generic implementation. This is when the traits technique becomes important - by encapsulating those properties that need to be considered on a type-by-type basis inside a traits class, we can minimize the amount of code that has to differ from one type to another and maximize the amount of generic code.</div></figure><p id="1979d82d-7bbb-44c6-8242-a72da699234c" class="">
</p><p id="e87c4442-de07-448f-a775-1c32b12eda90" class="">
</p><p id="446e019f-9f76-4b04-803a-beb1092fd3d9" class="">
</p><h2 id="839f5d14-2910-419a-8891-e0e23b7d9bf8" class=""><mark class="highlight-blue">Tag Dispatching :</mark></h2><p id="e19685d3-741b-445e-a216-6f139f567b90" class=""><div class="indented"><p id="17f7025e-9996-4443-91af-1edf79d9d54e" class="">
</p></div></p><p id="1383ccab-4a24-4df4-9d68-071878f30b25" class="">
</p></div></p><p id="ceb2511a-3b58-4607-8c2b-e3e0602cc848" class="">
</p><h2 id="eb3c6b0b-d455-426b-868d-a57604b67a27" class=""><mark class="highlight-purple">-</mark> <mark class="highlight-purple">is_integral :</mark></h2><h2 id="70ca8dfa-0162-496e-a272-799087b3328a" class=""><mark class="highlight-purple">-</mark> <mark class="highlight-purple">enable_if :</mark></h2><p id="8084a1db-9416-4708-925b-7f0a710a18c0" class="">
</p></div></article></body></html>
