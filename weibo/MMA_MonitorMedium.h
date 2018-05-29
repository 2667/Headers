//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;
@protocol MMA_MonitorMediumDelegate;

@interface MMA_MonitorMedium : NSObject
{
    long long _timeId;
    UIView *_view;
    id <MMA_MonitorMediumDelegate> _delegate;
    NSString *_requestUrl;
}

+ (id)objectWithTimeId:(long long)arg1 view:(id)arg2 delegate:(id)arg3;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) __weak id <MMA_MonitorMediumDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) long long timeId; // @synthesize timeId=_timeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)monitorSendRequestWithType:(long long)arg1;
- (void)monitorFinish;

@end

