//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSEncodeConfig.h"

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface KSSoftwareEncodeConfig : KSEncodeConfig <NSCoding>
{
    NSNumber *_width;
    NSNumber *_height;
    NSString *_x264Params;
    NSString *_x264ParamsCellular;
    NSString *_videoEncoderName;
    NSNumber *_bitrate;
}

+ (void)saveToDiskCache:(id)arg1;
+ (id)loadFromDiskCache;
+ (id)defaultConfig;
@property(retain, nonatomic) NSNumber *bitrate; // @synthesize bitrate=_bitrate;
@property(copy, nonatomic) NSString *videoEncoderName; // @synthesize videoEncoderName=_videoEncoderName;
@property(copy, nonatomic) NSString *x264ParamsCellular; // @synthesize x264ParamsCellular=_x264ParamsCellular;
@property(copy, nonatomic) NSString *x264Params; // @synthesize x264Params=_x264Params;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

