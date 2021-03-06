//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBSCBasicService, UITableView;

@protocol TBSCBasicViewProtocol <NSObject>

@optional
- (_Bool)isNetReachable;
- (void)backToPrePage:(id)arg1;
- (_Bool)needAlert;
- (void)hideLodingView;
- (void)showLoadingView;
- (_Bool)needLoadingView;
- (_Bool)needPaging;
- (_Bool)needRefresh;
- (void)tableViewNextPage:(UITableView *)arg1;
- (void)tableViewRefresh:(UITableView *)arg1;
- (UITableView *)tableView;
- (void)showEmptyView:(TBSCBasicService *)arg1;
- (void)nextPage;
- (void)refresh;
- (void)setData;
- (void)reload;
- (void)loadData;
- (struct CGRect)defaultFrame;
- (void)setUpView;
- (id)initWithObjId:(unsigned long long)arg1;
@end

