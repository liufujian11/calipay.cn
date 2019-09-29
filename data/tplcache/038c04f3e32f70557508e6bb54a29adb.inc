<li>
								[field:array runphp='yes']
								@me = (empty(@me['litpic']) ? "" : "<a href='{@me[' arcurl']}'class='preview'><img
										src='{@me[' litpic']}' /></a>");
								[/field:array]
								<h3><a href="[field:arcurl/]" class="title">[field:title/]</a></h3>
								<span class="info p-2">
									<time><i class="fa fa-clock-o red pr-2"></i>时间：[field:pubdate
										function="GetDateTimeMK(@me)"/]</time>
									<small><i class="fa fa-eye red pr-2 "></i>浏览：[field:click/]</small>
								</span>
								<p class="intro">
									[field:description/]...
								</p>
							</li>