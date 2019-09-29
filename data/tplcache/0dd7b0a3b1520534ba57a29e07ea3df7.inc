<div class="col-md-8 border">
                    <h2><a href="{dede:field name='typeurl'/}" target="_blank">{dede:field name='typename'/}</a>
                        <ul class="d-flex justify-content-between flex-wrap">
                            {dede:arclist orderby='pubdate' row='6' titlelen='42' }
                            <li class="list-unstyled m-3">
                                <div>
                                    <a href="[field:arcurl/]" title="[field:title/]​" target="_blank">
                                        <img src="[field:litpic/]" alt="[field:title/]" class="img-responsive img-rounded">
                                    </a>
                                </div>
                                <h4><a href="[field:arcurl/]" title="[field:title/]​" target="_blank">
                                        <strong>[field:title/]</strong>
                                    </a>
                                </h4>
                                <p> <i class="fas fa-calendar-alt"></i>
                                    [field:pubdate function="MyDate('Y年m月d日',@me)"/]
                                    <i class="glyphicon glyphicon-eye-open"></i>
                                    查看： [field:click/]
                                </p>
                            </li>
                            {/dede:arclist}
                        </ul>
                </div>