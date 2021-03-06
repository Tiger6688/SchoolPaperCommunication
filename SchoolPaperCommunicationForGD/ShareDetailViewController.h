//
//  DetailViewController.h
//  SchoolPaperCommunicationForGD
//
//  Created by 欧 展飞 on 13-12-4.
//  Copyright (c) 2013年 yaodd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XXTModelGlobal.h"

@interface ShareDetailViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UIImageView *userHead;
@property (nonatomic, retain) UILabel *userName;
@property (nonatomic, retain) UILabel *shareDate;
@property (nonatomic, retain) UILabel *shareContent;
@property (nonatomic, retain) UIImageView *shareImg;
@property (nonatomic, retain) UITableView *commentList;
@property (nonatomic, retain) UILabel *numberOflike;
@property (nonatomic, retain) UILabel *numberOfComment;
@property (nonatomic, retain) UIView *commentBackground;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic ,retain) NSMutableArray *commentDataArray;

- (id)initWithMicro:(XXTMicroblog*)micro;

@end
