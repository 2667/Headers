//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, UISearchBar, WBContact, WBDirectionalGroup;

@protocol WBGroupMemberViewControllerProtocol <NSObject>
- (void)showConfirmationBeforeDeleteContact:(WBContact *)arg1;
- (_Bool)shouldConfirmBeforeDeleteContact;
- (void)removeContactFromLocal:(WBContact *)arg1 completion:(void (^)(_Bool, long long))arg2;
- (void)removeContactFromServer:(WBContact *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)dismissTips;
- (void)showErrorTipsText:(NSString *)arg1;
- (void)showErrorTips:(NSError *)arg1;
- (void)showLoadingTips:(NSString *)arg1;
- (_Bool)searchBarShouldBeginEditing:(UISearchBar *)arg1;
- (void)deleteCellWithContact:(WBContact *)arg1;
- (void)selectCellWithContact:(WBContact *)arg1;
- (void)removeContactsFromGridViewAtIndex:(long long)arg1;
- (void)setEditing:(_Bool)arg1;
- (_Bool)editing;
- (NSArray *)getGridViewDataSource;
- (long long)contactsLimitForNLine:(long long)arg1;
- (void)refreshMemberContacts;
- (void)showMoreContacts;
- (long long)getUserCount;
- (_Bool)isMyAffiliatedGroupAndGroupMember;
- (_Bool)isGroupManager;
- (_Bool)isGroupOwner;
- (_Bool)singleUserIsOwner;
- (WBDirectionalGroup *)getGroup;
@end

