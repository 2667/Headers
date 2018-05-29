//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SDWGTableView, UIActivityIndicatorView, UIButton, UILabel, UIView, WGCommentinfo, WGGameDetailsModel, WGGameInfoAdapterView, WGGameItemModel;

@interface WGReplysViewController : WGBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isLoading;
    _Bool _shouldLoadMore;
    WGGameDetailsModel *_detailsModel;
    UIButton *_backBtn;
    WGGameInfoAdapterView *_adapterView;
    WGCommentinfo *_info;
    WGGameItemModel *_replyModel;
    long long _pageIndex;
    SDWGTableView *_tableView;
    UIButton *_inputBtn;
    long long _hotsort;
    UIActivityIndicatorView *_tableFooterActivityIndicator;
    UILabel *_loadMoreText;
    UIView *_tableFooterView;
}

@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UILabel *loadMoreText; // @synthesize loadMoreText=_loadMoreText;
@property(retain, nonatomic) UIActivityIndicatorView *tableFooterActivityIndicator; // @synthesize tableFooterActivityIndicator=_tableFooterActivityIndicator;
@property(nonatomic) _Bool shouldLoadMore; // @synthesize shouldLoadMore=_shouldLoadMore;
@property(nonatomic) long long hotsort; // @synthesize hotsort=_hotsort;
@property(retain, nonatomic) UIButton *inputBtn; // @synthesize inputBtn=_inputBtn;
@property(retain, nonatomic) SDWGTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) WGGameItemModel *replyModel; // @synthesize replyModel=_replyModel;
@property(retain, nonatomic) WGCommentinfo *info; // @synthesize info=_info;
@property(retain, nonatomic) WGGameInfoAdapterView *adapterView; // @synthesize adapterView=_adapterView;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) WGGameDetailsModel *detailsModel; // @synthesize detailsModel=_detailsModel;
- (void).cxx_destruct;
- (void)searchTypeMenu:(id)arg1 didSelectTypeAtIndex:(long long)arg2;
- (id)commentCellforIdentifier:(id)arg1;
- (id)classNameForIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)realodData;
- (void)back;
- (id)backBarButtonItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)requestReply;
- (void)loadMoreEnd;
- (void)loadMoreBegin;
- (void)createTableFooter;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithCommentInfo:(id)arg1;
- (void)clickComment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

