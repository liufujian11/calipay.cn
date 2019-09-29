<div class="px-3 mb-3 border">
                        <!-- 标题 -->
                        <div class="row">
                            <div class="col-12 my-3">
                                <h2 class="section-title"><a href="{dede:field name='typeurl'/}">{dede:field
                                        name='typename'/}</a> </h2>
                            </div>
                        </div>

                        <!-- 内容列表 -->
                        <ul class="row">
                            {dede:arclist row='6'}
                            <li class="col-lg-4 col-md-6">
                                <!-- 图片 -->
                                <a href="[field:arcurl/]">
                                    <img src="[field:litpic/]" class="img-thumbnail" alt="[field:title/]">
                                </a>
                                <!-- 内容标题 -->
                                <div class="post_box mt-2">
                                    <h4>
                                        <a href="[field:arcurl/]" alt="[field:title/]"
                                            title="[field:title/]">[field:title/]</a>
                                    </h4>
                                    <time class="small mr-4">
                                        <i class="fa fa-calendar red mr-2"></i>
                                        [field:pubdate function="Mydate('Y-m-d',@me)"/]
                                    </time>
                                    <span><i class="fa fa-eye red mr-2"></i><small>阅读：[field:click/]</small></span>
                                </div>
                            </li>
                            {/dede:arclist}
                        </ul>
                    </div>