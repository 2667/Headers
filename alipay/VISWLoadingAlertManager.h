//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SWLoadingAlert;

@interface VISWLoadingAlertManager : NSObject
{
    SWLoadingAlert *_loadingAlert;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SWLoadingAlert *loadingAlert; // @synthesize loadingAlert=_loadingAlert;
- (void).cxx_destruct;
- (void)finishedWithResult:(id)arg1;
- (void)showLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissByConfig;
- (void)dismiss;
- (void)setLoadingStatus:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;

@end
