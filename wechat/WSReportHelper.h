//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WSReportHelper : NSObject
{
}

+ (void)reportVoiceSearchEvent:(int)arg1 sessionid:(id)arg2 subSessionid:(id)arg3 query:(id)arg4 scene:(unsigned int)arg5 isNavVoice:(_Bool)arg6;
+ (void)reportRtnBackEvent:(int)arg1 scene:(unsigned int)arg2 ishomepage:(_Bool)arg3 query:(id)arg4;
+ (void)reportPreviewWebviewAction:(int)arg1 biz:(int)arg2 timecost:(unsigned long long)arg3;
+ (void)reportWebviewError:(int)arg1 scene:(unsigned int)arg2 h5version:(unsigned int)arg3 errorCode:(int)arg4 errorMsg:(id)arg5;
+ (void)ReportWSLoadRecommendH5Fail;
+ (void)ReportAccessRecommendDownloadH5;
+ (void)ReportAccessRecommendDefaultH5;
+ (void)ReportUnRecognizedJSApi;
+ (void)ReportWSLoadH5Fail;
+ (void)ReportAccessDownloadH5;
+ (void)ReportAccessDefaultH5;

@end

