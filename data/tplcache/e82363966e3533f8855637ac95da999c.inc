<li class="d-flex justify-content-between">
                            <a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
                            <span>[field:pubdate function="Mydate('Y-m-d',@me)"/]</span>
                            {dede:field name='pubdate' function='strftime("%Y-%m-%d %H:%M:%S","@me")'/}
                        </li>