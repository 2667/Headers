//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSPermission.h"

#import "KSPermissionType-Protocol.h"

@class NSString;

@interface KSPermissionRemoteNotification : KSPermission <KSPermissionType>
{
    NSString *_sceneAlertTitle;
    NSString *_sceneAlertDetail;
}

@property(retain, nonatomic) NSString *sceneAlertDetail; // @synthesize sceneAlertDetail=_sceneAlertDetail;
@property(retain, nonatomic) NSString *sceneAlertTitle; // @synthesize sceneAlertTitle=_sceneAlertTitle;
- (void).cxx_destruct;
- (void)_addClickWithScene:(long long)arg1;
- (void)permissionConfirmAction;
- (void)permissionAlertWithScene:(long long)arg1;
- (id)identifier;
- (long long)permission;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

