//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTAVPreloaderItem : NSObject
{
    int _supportedResolutionMask;
    NSString *_vid;
    NSString *_URL;
    NSString *_filePath;
    long long _resolution;
    NSString *_fileKey;
    double _urlGenerateTime;
    long long _taskId;
}

@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int supportedResolutionMask; // @synthesize supportedResolutionMask=_supportedResolutionMask;
@property(nonatomic) double urlGenerateTime; // @synthesize urlGenerateTime=_urlGenerateTime;
@property(copy, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

