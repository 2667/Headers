//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (AWEExtension)
+ (_Bool)btd_firstTimeRun;
+ (_Bool)btd_everyTimeRunByType:(int)arg1;
+ (void)btd_resetEveryTimeRunDefaults;
+ (void)btd_setFirstTimeRunByKey:(id)arg1;
+ (void)btd_setNotFirstTimeRunByKey:(id)arg1;
+ (_Bool)btd_firstTimeRunByKey:(id)arg1;
+ (_Bool)btd_firstTimeRunByType:(int)arg1;
+ (void)btd_saveBoolForKey:(id)arg1 boolValue:(_Bool)arg2;
+ (_Bool)btd_boolForKey:(id)arg1;
+ (id)btd_standardStringForKey:(id)arg1;
+ (id)extensionUserDefaultsSuitName;
+ (id)extensionUserDefaults;
@property(retain, nonatomic) NSString *awe_deviceID; // @dynamic awe_deviceID;
@end

