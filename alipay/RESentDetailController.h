//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableLayoutViewController.h"

#import "REErrorViewDelegate-Protocol.h"
#import "RERouterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APRichLayer, GIFTPRODGiftCrowdFlowInfoResult, NSMutableArray, NSString, REARImageBrowser, REButton, REMoreFooterView, UIImage, UILabel;

@interface RESentDetailController : RETableLayoutViewController <UITableViewDelegate, UITableViewDataSource, RERouterDelegate, REErrorViewDelegate>
{
    long long _once_token;
    int _rpcType;
    int _pageNo;
    UILabel *_pageTitleLayer;
    APRichLayer *_remarkLayer;
    APRichLayer *_timeLayer;
    APRichLayer *_statusLayer;
    REButton *_resendButton;
    NSString *_crowdNo;
    GIFTPRODGiftCrowdFlowInfoResult *_result;
    REMoreFooterView *_moreFooterView;
    UILabel *_crowdNoLabel;
    NSMutableArray *_items;
    UIImage *_clueImage;
    REARImageBrowser *_imageBrowser;
}

@property(retain, nonatomic) REARImageBrowser *imageBrowser; // @synthesize imageBrowser=_imageBrowser;
@property(retain, nonatomic) UIImage *clueImage; // @synthesize clueImage=_clueImage;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UILabel *crowdNoLabel; // @synthesize crowdNoLabel=_crowdNoLabel;
@property(nonatomic) int rpcType; // @synthesize rpcType=_rpcType;
@property(retain, nonatomic) REMoreFooterView *moreFooterView; // @synthesize moreFooterView=_moreFooterView;
@property(retain, nonatomic) GIFTPRODGiftCrowdFlowInfoResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(retain, nonatomic) REButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) APRichLayer *statusLayer; // @synthesize statusLayer=_statusLayer;
@property(retain, nonatomic) APRichLayer *timeLayer; // @synthesize timeLayer=_timeLayer;
@property(retain, nonatomic) APRichLayer *remarkLayer; // @synthesize remarkLayer=_remarkLayer;
@property(retain, nonatomic) UILabel *pageTitleLayer; // @synthesize pageTitleLayer=_pageTitleLayer;
- (void).cxx_destruct;
- (void)didClickedErrorViewButton:(id)arg1;
- (void)moreFooterViewDidCallBack:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleAvatarTap:(id)arg1;
- (void)gotoMessageList;
- (void)pushImageBrowserVCWithImage:(id)arg1;
- (void)gotoBrowseImageWithCloudId:(id)arg1;
- (void)shareAREnvelopeWithGiftInfo:(id)arg1;
- (void)resendButtonClicked;
- (id)buildARInfoViewWithLocation:(id)arg1 withClouId:(id)arg2;
- (id)buildAvatarView:(id)arg1;
- (_Bool)isNeedShowResend;
- (id)buildSubTitleView:(id)arg1 width:(double)arg2;
- (id)buildSubTitleListView:(id)arg1;
- (id)buildAlertTitleView:(id)arg1;
- (id)bottomContentView;
- (id)buildBottomSubTitleLabel:(id)arg1;
- (void)queryResult;
- (id)viewForTableLayoutHeader:(id)arg1;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithCrowdNo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

