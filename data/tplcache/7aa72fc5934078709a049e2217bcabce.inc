<div class="px-3">
                        <!-- 标题 -->
                        <div class="row">
                            <div class="col-12 section-title my-3">
                                <h2><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a> </h2>
                            </div>
                        </div>
                        <!-- 内容列表 -->
                        <ul class="row">
                            {dede:arclist row='6' orderby='hot'}
                            <li class="col-lg-4 col-md-6">
                                <!-- 图片 -->
                                <a href="#">
                                    <img src="[field:litpic/]" class="img-thumbnail" title="[field:title/]" alt="[field:arcurl/]">
                                </a>
                                <!-- 内容标题 -->
                                <div class="post_box mt-2">
                                    <h4 class="title-16">
                                        <a href="[field:arcurl/]" alt="[field:title/]" title="[field:title/]">[field:title/]</a>
                                    </h4>
                                    <span class="small"><i class="fa fa-calendar"></i> [field:pubdate function="Mydate('Y-m-d',@me)"/]</span>
                                    <span class="small"><i class="fa fa-comment"></i>查看：[field:click/]</span>
                                </div>
                            </li>
                           {/dede:arclist}
                        </ul>

                    </div>