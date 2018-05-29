//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WBTableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIControl, WBSearchBar;

@interface WBFriendSearchViewController : WBCardListViewController <UISearchBarDelegate, UIScrollViewDelegate, WBTableViewDelegate>
{
    _Bool _isSearch;
    _Bool _isDisplayHistory;
    _Bool _touchOverlayShouldCancel;
    WBSearchBar *searchBar;
    NSArray *_historyCards;
    NSArray *_searchResultCards;
    NSMutableArray *_historySearchSuggestions;
    UIControl *_overLayView;
}

@property(nonatomic) _Bool touchOverlayShouldCancel; // @synthesize touchOverlayShouldCancel=_touchOverlayShouldCancel;
@property(retain, nonatomic) UIControl *overLayView; // @synthesize overLayView=_overLayView;
@property(retain, nonatomic) NSMutableArray *historySearchSuggestions; // @synthesize historySearchSuggestions=_historySearchSuggestions;
@property(retain, nonatomic) NSArray *searchResultCards; // @synthesize searchResultCards=_searchResultCards;
@property(retain, nonatomic) NSArray *historyCards; // @synthesize historyCards=_historyCards;
@property(nonatomic) _Bool isDisplayHistory; // @synthesize isDisplayHistory=_isDisplayHistory;
@property(nonatomic) _Bool isSearch; // @synthesize isSearch=_isSearch;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar;
- (void).cxx_destruct;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissKeyboard;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)isNeedEdgeInset;
- (id)cards;
- (void)searchUserWithSuggestion:(id)arg1;
- (void)loadGroupSearchUserWithsearchKey:(id)arg1;
- (id)cardWithUserDict:(id)arg1;
- (id)multiCardsWithUsers:(id)arg1;
- (void)displayHistorySuggestion;
- (void)reloadHistorySuggestion;
- (void)saveSearchHistories;
- (id)cardWithSuggestion:(id)arg1 canRemove:(_Bool)arg2;
- (id)searchHistoriesCardWithHistories:(id)arg1;
- (id)multiCardWithSuggestions:(id)arg1 moreButtonTitle:(id)arg2 canRemove:(_Bool)arg3;
- (id)searchHistories;
- (void)onOverLayViewTouched:(id)arg1;
- (void)updateOverLayViewFrame;
- (void)resetSupportPull;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (void)reloadUIElements;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

