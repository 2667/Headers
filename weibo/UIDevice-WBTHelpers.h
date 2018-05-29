//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (WBTHelpers)
+ (id)wbt_ipInfo;
+ (id)wbt_ip:(_Bool)arg1;
+ (long long)getAvailableMemorySize;
+ (long long)getTotalMemorySize;
+ (id)wbt_getDeviceSSID;
+ (_Bool)wbt_supportsHealthData;
+ (_Bool)wbt_supportsLivePhoto;
+ (_Bool)wbt_supportsForceTouch;
+ (id)wbt_appAddressWithAppPath:(id)arg1;
+ (id)wbt_appUUIDWithAppPath:(id)arg1;
+ (id)wbt_dateSysctl:(id)arg1;
+ (id)wbt_currentCPUArch;
+ (_Bool)wbt_isJailbroken;
+ (void)wbt_registerLockEventListener;
+ (unsigned long long)wbt_assetMaxDimension;
+ (id)wbt_getDevicePortrait;
+ (id)wbt_getReturnPlat:(id)arg1;
+ (id)wbt_platform;
+ (id)wbt_getStandardPlat;
+ (double)portraitWidthWithOffset:(_Bool)arg1;
- (double)wbt_batteryVoltage;
- (double)wbt_batteryTemperature;
- (long long)wbt_batteryCycleCount;
- (long long)wbt_batteryMaximumCapacity;
- (long long)wbt_batteryDesignCapacity;
- (double)wbt_batteryLevel;
- (double)wbt_appCPUUsage;
- (id)wbt_modeInfo;
- (_Bool)wbt_isLockedWhileRunning;
- (_Bool)wbt_isLocked;
- (void)wbt_markAsUnLocked;
- (void)wbt_markAsLocked;
- (_Bool)wbt_isUIUserInterfaceIdiomPad;
- (void)wbt_turnLedLightTo:(_Bool)arg1;
- (_Bool)wbt_isLedLightOn;
- (_Bool)wbt_hasLedLight;
- (id)wbt_macAddress;
- (_Bool)wbt_canSendText;
- (_Bool)wbt_canMakeCall;
- (id)wbt_mobileNetworkCode;
- (id)wbt_mobileCountryCode;
- (id)wbt_carrierName;
- (int)wbt_systemMainVersion;
- (_Bool)wbt_shouldApplyiOS7Appearence;
- (_Bool)wbt_isIPadPro;
- (_Bool)wbt_isIPadRetina;
- (_Bool)wbt_isIPadClassic;
- (_Bool)wbt_isIPad;
- (_Bool)wbt_isIPhoneX;
- (_Bool)wbt_isIPhone6;
- (_Bool)wbt_isIPhone6Plus;
- (_Bool)wbt_isLongScreen;
- (_Bool)wbt_is4InchRetinaDisplay_old;
- (_Bool)wbt_is4InchRetinaDisplay;
- (_Bool)wbt_isRetinaDisplay;
- (unsigned long long)screenType;
@end

