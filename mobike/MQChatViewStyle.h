//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton, UIColor, UIImage;

@interface MQChatViewStyle : NSObject
{
    _Bool _didSetStatusBarStyle;
    _Bool _enableRoundAvatar;
    _Bool _enableIncomingAvatar;
    _Bool _enableOutgoingAvatar;
    UIColor *_incomingMsgTextColor;
    UIColor *_incomingBubbleColor;
    UIColor *_outgoingMsgTextColor;
    UIColor *_outgoingBubbleColor;
    UIColor *_eventTextColor;
    UIColor *_redirectAgentNameColor;
    UIColor *_navTitleColor;
    UIColor *_navBarTintColor;
    UIColor *_navBarColor;
    UIColor *_pullRefreshColor;
    UIImage *_messageSendFailureImage;
    UIImage *_photoSenderImage;
    UIImage *_photoSenderHighlightedImage;
    UIImage *_voiceSenderImage;
    UIImage *_voiceSenderHighlightedImage;
    UIImage *_keyboardSenderImage;
    UIImage *_keyboardSenderHighlightedImage;
    UIImage *_resignKeyboardImage;
    UIImage *_resignKeyboardHighlightedImage;
    UIImage *_incomingBubbleImage;
    UIImage *_outgoingBubbleImage;
    UIImage *_imageLoadErrorImage;
    long long _statusBarStyle;
    UIButton *_navBarLeftButton;
    UIButton *_navBarRightButton;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _bubbleImageStretchInsets;
}

+ (id)greenStyle;
+ (id)darkStyle;
+ (id)blueStyle;
+ (id)defaultStyle;
+ (id)createWithStyle:(unsigned long long)arg1;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool enableOutgoingAvatar; // @synthesize enableOutgoingAvatar=_enableOutgoingAvatar;
@property(nonatomic) _Bool enableIncomingAvatar; // @synthesize enableIncomingAvatar=_enableIncomingAvatar;
@property(nonatomic) _Bool enableRoundAvatar; // @synthesize enableRoundAvatar=_enableRoundAvatar;
@property(retain, nonatomic) UIButton *navBarRightButton; // @synthesize navBarRightButton=_navBarRightButton;
@property(retain, nonatomic) UIButton *navBarLeftButton; // @synthesize navBarLeftButton=_navBarLeftButton;
@property(nonatomic) _Bool didSetStatusBarStyle; // @synthesize didSetStatusBarStyle=_didSetStatusBarStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) struct UIEdgeInsets bubbleImageStretchInsets; // @synthesize bubbleImageStretchInsets=_bubbleImageStretchInsets;
@property(retain, nonatomic) UIImage *imageLoadErrorImage; // @synthesize imageLoadErrorImage=_imageLoadErrorImage;
@property(retain, nonatomic) UIImage *outgoingBubbleImage; // @synthesize outgoingBubbleImage=_outgoingBubbleImage;
@property(retain, nonatomic) UIImage *incomingBubbleImage; // @synthesize incomingBubbleImage=_incomingBubbleImage;
@property(retain, nonatomic) UIImage *resignKeyboardHighlightedImage; // @synthesize resignKeyboardHighlightedImage=_resignKeyboardHighlightedImage;
@property(retain, nonatomic) UIImage *resignKeyboardImage; // @synthesize resignKeyboardImage=_resignKeyboardImage;
@property(retain, nonatomic) UIImage *keyboardSenderHighlightedImage; // @synthesize keyboardSenderHighlightedImage=_keyboardSenderHighlightedImage;
@property(retain, nonatomic) UIImage *keyboardSenderImage; // @synthesize keyboardSenderImage=_keyboardSenderImage;
@property(retain, nonatomic) UIImage *voiceSenderHighlightedImage; // @synthesize voiceSenderHighlightedImage=_voiceSenderHighlightedImage;
@property(retain, nonatomic) UIImage *voiceSenderImage; // @synthesize voiceSenderImage=_voiceSenderImage;
@property(retain, nonatomic) UIImage *photoSenderHighlightedImage; // @synthesize photoSenderHighlightedImage=_photoSenderHighlightedImage;
@property(retain, nonatomic) UIImage *photoSenderImage; // @synthesize photoSenderImage=_photoSenderImage;
@property(retain, nonatomic) UIImage *messageSendFailureImage; // @synthesize messageSendFailureImage=_messageSendFailureImage;
@property(copy, nonatomic) UIColor *pullRefreshColor; // @synthesize pullRefreshColor=_pullRefreshColor;
@property(copy, nonatomic) UIColor *navBarColor; // @synthesize navBarColor=_navBarColor;
@property(copy, nonatomic) UIColor *navBarTintColor; // @synthesize navBarTintColor=_navBarTintColor;
@property(copy, nonatomic) UIColor *navTitleColor; // @synthesize navTitleColor=_navTitleColor;
@property(copy, nonatomic) UIColor *redirectAgentNameColor; // @synthesize redirectAgentNameColor=_redirectAgentNameColor;
@property(copy, nonatomic) UIColor *eventTextColor; // @synthesize eventTextColor=_eventTextColor;
@property(copy, nonatomic) UIColor *outgoingBubbleColor; // @synthesize outgoingBubbleColor=_outgoingBubbleColor;
@property(copy, nonatomic) UIColor *outgoingMsgTextColor; // @synthesize outgoingMsgTextColor=_outgoingMsgTextColor;
@property(copy, nonatomic) UIColor *incomingBubbleColor; // @synthesize incomingBubbleColor=_incomingBubbleColor;
@property(copy, nonatomic) UIColor *incomingMsgTextColor; // @synthesize incomingMsgTextColor=_incomingMsgTextColor;
- (void).cxx_destruct;
- (id)init;

@end

