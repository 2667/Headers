//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GtGbdBaseTask.h"

@class NSString;

@interface GtGbdReportTask : GtGbdBaseTask
{
    int curTryIndex;
    _Bool isSending;
    double nextTryTime;
    int retryTimes;
    NSString *requestUrl;
}

@property(nonatomic) int retryTimes; // @synthesize retryTimes;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl;
- (void).cxx_destruct;
- (void)saveDbCache;
- (id)buildPostBody;
- (void)taskFinishWithResult:(id)arg1;
- (void)sendAsnyc;
- (void)runTaskInTimer;
- (_Bool)preStartTask;
- (id)init;

@end
