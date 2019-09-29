<li>
								[field:array runphp='yes']
								@me = (empty(@me['litpic']) ? "" : "<a href='{@me[' arcurl']}'class='preview'><img src='{@me[' litpic']}' /></a>");
								[/field:array]
								<h3><a href="[field:arcurl/]" class="title">[field:title/]</a></h3>
								<span class="info p-2">
									<time><i class="fa fa-clock-o mr-2 red"></i>时间：</time>[field:pubdate function="GetDateTimeMK(@me)"/]
									<small><i class="fa fa-eye red mr-2"></i>浏览：</small>[field:click/]
									<small><i class="fa fa-thumbs-o-up red mr-2"></i>好评：</small>[field:scores/]
								</span>
								<p class="intro">
									[field:description/]...
								</p>
							</li>