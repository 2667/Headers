//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WBNetworkClientModularizedRecord : NSObject
{
    NSString *_moduleName;
    unsigned long long _startTimeStamp;
    unsigned long long _endTimeStamp;
    NSString *_urlPath;
}

@property(retain) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property unsigned long long endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(retain) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (_Bool)validate;
- (unsigned long long)duringAbsTime;
- (void)stopTimeRecord;
- (id)initWithModuleName:(id)arg1 andUrl:(id)arg2;

@end

