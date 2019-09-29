<li>
                            <!-- 图片 -->
                            <a href="[field:arcurl/]" title="[field:title/]">
                                <img src="[field:litpic/]" class="img-thumbnail" width="100%" height="60%"
                                    alt="[field:title/]" title="[field:title/]">
                            </a>
                            <!-- 内容 -->
                            <div id="post-content" class="p-2">
                                <span class="bg-red text-white px-2">
                                    <a href="[field:typelink/]">[field:typename/]</a>
                                </span>
                                <h5 class="text-white">
                                    <a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
                                </h5>
                                <div class="d-flex">
                                    <span class="text-white small">
                                        <i class="fa fa-calendar red mr-1"></i>
                                        [field:pubdate function="Mydate('Y-m-d',@me)"/]
                                    </span>
                                    <small class="text-white">
                                        <i class="fa fa-comment red mr-1"></i>查看：[field:click/]
                                    </small>
                                </div>
                            </div>
                        </li>