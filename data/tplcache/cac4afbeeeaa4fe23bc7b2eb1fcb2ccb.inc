<li>
								[field:array runphp='yes']
								@me = (empty(@me['litpic']) ? "" : "<a href='{@me[' arcurl']}'class='preview'><img src='{@me[' litpic']}' /></a>");
								[/field:array]
								<h3><a href="[field:arcurl/]" class="title">[field:title/]</a></h3>
								<span class="info p-2">
									<small>日期：</small>[field:pubdate function="GetDateTimeMK(@me)"/]
									<small>点击：</small>[field:click/]
									<small>好评：</small>[field:scores/]
								</span>
								<p class="intro">
									[field:description/]...
								</p>
							</li>