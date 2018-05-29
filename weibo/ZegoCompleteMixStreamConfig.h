//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface ZegoCompleteMixStreamConfig : NSObject
{
    _Bool _outputIsUrl;
    int _outputFps;
    int _outputBitrate;
    int _outputAudioConfig;
    int _channels;
    int _outputBackgroundColor;
    NSString *_outputStream;
    NSMutableArray *_inputStreamList;
    NSData *_userData;
    NSString *_outputBackgroundImage;
    struct CGSize _outputResolution;
}

@property(copy) NSString *outputBackgroundImage; // @synthesize outputBackgroundImage=_outputBackgroundImage;
@property int outputBackgroundColor; // @synthesize outputBackgroundColor=_outputBackgroundColor;
@property int channels; // @synthesize channels=_channels;
@property(retain) NSData *userData; // @synthesize userData=_userData;
@property(retain) NSMutableArray *inputStreamList; // @synthesize inputStreamList=_inputStreamList;
@property int outputAudioConfig; // @synthesize outputAudioConfig=_outputAudioConfig;
@property struct CGSize outputResolution; // @synthesize outputResolution=_outputResolution;
@property int outputBitrate; // @synthesize outputBitrate=_outputBitrate;
@property int outputFps; // @synthesize outputFps=_outputFps;
@property _Bool outputIsUrl; // @synthesize outputIsUrl=_outputIsUrl;
@property(copy) NSString *outputStream; // @synthesize outputStream=_outputStream;
- (void).cxx_destruct;
- (id)init;

@end

