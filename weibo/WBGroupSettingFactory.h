//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBGroupSettingFactory : NSObject
{
}

+ (id)createEditVIPPriceSectionWithGroup:(id)arg1 memberType:(int)arg2 managementType:(int)arg3;
+ (id)createBottomSectionWithGroup:(id)arg1 memberType:(int)arg2 managementType:(int)arg3;
+ (id)createSecondMiddleSectionWithGroup:(id)arg1 memberType:(int)arg2;
+ (id)createMiddleSectionWithGroup:(id)arg1 memberType:(int)arg2;
+ (id)createTopSectionWithGroup:(id)arg1 memberType:(int)arg2 isFromPublish:(_Bool)arg3;
+ (id)createGroupListWithType:(int)arg1 group:(id)arg2 memberType:(int)arg3;
+ (id)groupListForChatInfo:(id)arg1 memberType:(int)arg2;
+ (id)groupListForGuest:(id)arg1 memberType:(int)arg2;
+ (id)topSectionWithGroup:(id)arg1 memberType:(int)arg2 userInfo:(id)arg3;
+ (id)topSectionWithGroup:(id)arg1 memberType:(int)arg2;
+ (id)supplementaryItemForMemberType:(int)arg1 group:(id)arg2;
+ (long long)supplementaryItemCountForType:(int)arg1;
+ (id)groupSettingsWithType:(int)arg1 group:(id)arg2 memberType:(int)arg3;
+ (id)groupSettingTitleForType:(int)arg1 memberType:(int)arg2;

@end

