//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXNavigatorModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_45;
+ (id)wx_export_method_44;
+ (id)wx_export_method_43;
+ (id)wx_export_method_42;
+ (id)wx_export_method_41;
+ (id)wx_export_method_40;
+ (id)wx_export_method_39;
+ (id)wx_export_method_38;
+ (id)wx_export_method_37;
+ (id)wx_export_method_36;
+ (id)wx_export_method_35;
+ (id)wx_export_method_34;
+ (id)wx_export_method_33;
+ (id)wx_export_method_32;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)clearNavigationItemWithParam:(id)arg1 position:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)setNavigationItemWithParam:(id)arg1 position:(long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)clearNavBarTitle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarTitle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearNavBarMoreItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarMoreItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearNavBarLeftItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarLeftItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearNavBarRightItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarRightItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarBackgroundColor:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNavBarHidden:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)push:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)close:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)open:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)navigator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
