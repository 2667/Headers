//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

@class NSString, WBArticleIntegrateCardListViewController, WBLiveAutoPlayPageViewControllerWrapper, WBTableViewEmptyView;

@interface WBLiveAutoPlayPageViewController : WBCardListViewController
{
    NSString *_containerID;
    WBLiveAutoPlayPageViewControllerWrapper *_wrapper;
    WBArticleIntegrateCardListViewController *_list;
    WBTableViewEmptyView *_emptyView;
    NSString *_selectedContainerID;
}

@property(retain, nonatomic) NSString *selectedContainerID; // @synthesize selectedContainerID=_selectedContainerID;
@property(retain, nonatomic) WBTableViewEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) WBArticleIntegrateCardListViewController *list; // @synthesize list=_list;
@property(retain, nonatomic) WBLiveAutoPlayPageViewControllerWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (void)loadChannelData;
- (void)tapReload:(id)arg1;
- (void)updateRightBarButton;
- (_Bool)cardListCanShare;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

@end

