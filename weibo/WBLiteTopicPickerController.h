//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIControl, WBSearchBar, WBTableView;
@protocol WBLiteTopicPickerControllerDelegate;

@interface WBLiteTopicPickerController : WBViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    double _sectionHeight;
    id <WBLiteTopicPickerControllerDelegate> _delegate;
    WBTableView *_tableView;
    WBSearchBar *_searchBar;
    NSArray *_tableHeaderViews;
    NSArray *_recentTopics;
    NSArray *_recommendTopics;
    NSArray *_searchTopics;
    NSString *_searchingText;
    UIControl *_overlayView;
}

@property(retain, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSString *searchingText; // @synthesize searchingText=_searchingText;
@property(retain, nonatomic) NSArray *searchTopics; // @synthesize searchTopics=_searchTopics;
@property(retain, nonatomic) NSArray *recommendTopics; // @synthesize recommendTopics=_recommendTopics;
@property(retain, nonatomic) NSArray *recentTopics; // @synthesize recentTopics=_recentTopics;
@property(retain, nonatomic) NSArray *tableHeaderViews; // @synthesize tableHeaderViews=_tableHeaderViews;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WBLiteTopicPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cleanRecenTopic;
- (id)recentTopicInfos;
- (void)saveRecentTopic:(id)arg1;
- (void)reachabilityChanged;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)cancelAction;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)overlayViewTouched:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)endSearching;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)topicForIndexPath:(id)arg1;
- (void)didSelectTopic:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)searchMode;
- (id)headerViewWithTitle:(id)arg1 fontSize:(double)arg2;
- (void)didReceiveMemoryWarning;
- (id)topicModelsWithInfos:(id)arg1 withCleanItem:(_Bool)arg2;
- (void)setupDatas;
- (id)tableHeaderViewsWithTitle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

