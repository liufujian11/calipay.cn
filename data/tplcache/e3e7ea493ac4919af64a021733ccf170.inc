<div class="news-tabs border px-3">
                        <!-- 标题 -->
                        <div class="row bg-grey m-3">
                            <div class="col-md-4 col-sm-12 title-theme pl-0">
                                <h2>{dede:field name='typename'/}</h2>
                            </div>
                            <div class="col-md-8 col-sm-12 m-auto">
                                <!-- 二级分类 -->
                                <ul class="d-flex justify-content-end">
                                    {dede:channel type='son'}
                                    <li class="mx-2">
                                        <a href="[field:typelink/]" class="">[field:typename/]</a>
                                    </li>
                                    {/dede:channel}
                                </ul>
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
                                    <h4 class="title-16">
                                        <a href="[field:arcurl/]" alt="[field:title/]"
                                            title="[field:title/]">[field:title/]</a>
                                    </h4>
                                    <span><i class="fa fa-calendar"></i> <small>[field:pubdate
                                            function="Mydate('Y-m-d',@me)"/]</small></span>
                                    <span><i class="fa fa-comment"></i><small>阅读：[field:click/]</small></span>
                                </div>
                            </li>
                            {/dede:arclist}
                        </ul>                       
                    </div>