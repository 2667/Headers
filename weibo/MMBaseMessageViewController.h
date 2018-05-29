//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MIMessageViewController-Protocol.h"
#import "MMFrequencyLimiterDelegate-Protocol.h"
#import "MMPageCardStatusWithCommentCellDelegate-Protocol.h"
#import "MMPageInfoWithCommentMessageCellDelegate-Protocol.h"
#import "MsgRemindBtnViewDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBAudioPlayerDelegate-Protocol.h"
#import "WBContactMessageViewControllerDelegate-Protocol.h"
#import "WBCustomTextInputModalViewDelegate-Protocol.h"
#import "WBMultiImageViewControllerDelegate-Protocol.h"

@class ALAssetsLibrary, CALayer, MMFrequencyLimiter, MMInputManager, MMMessage, MsgRemindBtnView, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, UIAlertAction, UIBarButtonItem, UIButton, UIView, WBAlertController, WBAudioPlayer, WBContact, WBConversation, WBIndicatorView, WBMessage, WBMessageContentView, WBMessagePRLMTableViewWrapper, WBMessageSelectedView, WBMessagesTableHeaderView, WBPrivateMessageProximityStateHintBoard, WBProgressHUD, WBTimelinePageInfo;

@interface MMBaseMessageViewController : WBTableViewController <UIGestureRecognizerDelegate, MMPageCardStatusWithCommentCellDelegate, MsgRemindBtnViewDelegate, WBCustomTextInputModalViewDelegate, WBContactMessageViewControllerDelegate, MIMessageViewController, MMFrequencyLimiterDelegate, PRLMTableViewWrapperDelegate, WBAudioPlayerDelegate, WBMultiImageViewControllerDelegate, MMPageInfoWithCommentMessageCellDelegate>
{
    _Bool _hasShowKeyboardFromScheme;
    _Bool _firstTimeViewWillAppear;
    _Bool _shouldPopToRootViewController;
    _Bool _isEnteredFromMenu;
    _Bool _firstFetchHistoryMsgCompleted;
    _Bool _isShowedSearchAnimation;
    _Bool _isShowSelected;
    _Bool _isShowingPhotoVC;
    _Bool _pendingAssignFirstResponder;
    _Bool _isPullToLoadMore;
    _Bool _isLoadToLoadMore;
    _Bool _isFeedCardEnable;
    _Bool _isZanEnable;
    _Bool _isDragging;
    _Bool _hasMore;
    _Bool _hasNewMore;
    _Bool _isWaitingForDownlaod;
    _Bool _isContinuousPlaying;
    _Bool _isRepostPageInfoCard;
    _Bool _isAfterViewWillAppear;
    _Bool _needIgnore;
    _Bool _shouldTriggerHide;
    _Bool _canClearUnreadMsg;
    _Bool _isForbidNewMessage;
    _Bool _isFirstFetchMsg;
    _Bool _isRepostFeedInfoCard;
    int _chatType;
    int _refreshType;
    int _loadMoreType;
    long long _chatId;
    WBConversation *_chat;
    ALAssetsLibrary *_assetsLibrary;
    NSMutableDictionary *_users;
    NSMutableArray *_groups;
    WBMessageContentView *_contentView;
    WBMessagePRLMTableViewWrapper *_prlmWrapper;
    WBPrivateMessageProximityStateHintBoard *_hintBoard;
    WBProgressHUD *_progressHUD;
    MMInputManager *_inputBar;
    WBAudioPlayer *_audioPlayer;
    NSString *_defaultContent;
    NSMutableDictionary *_userInfo;
    UIView *_tipView;
    NSNumber *_isScrollToBottom;
    long long _mgsIdFromSearch;
    long long _mgsIdFromRemind;
    NSMutableArray *_muArrSelects;
    WBMessageSelectedView *_viewAllSelected;
    CALayer *_bottomLayer;
    NSDictionary *_fromDic;
    NSMutableDictionary *_preLoadIndexPathDict;
    WBIndicatorView *_pullIndicatorView;
    double _lastContentOffsetY;
    UIBarButtonItem *_btnItemRight;
    WBAlertController *_alert;
    UIAlertAction *_confirmAction;
    WBMessage *_messageRemind;
    unsigned long long _remindMsgType;
    NSTimer *_startTimer;
    NSTimer *_endTimer;
    NSTimer *_clearTimer;
    CALayer *_moveLayer;
    UIView *_rainView;
    NSString *_emojiLocalPath;
    WBMessagesTableHeaderView *_headerView;
    UIButton *_newMessageRemind;
    unsigned long long _newMessageRemindCount;
    double _lastContentOffset;
    long long _topNewMessageId;
    NSArray *_localMessages;
    long long _messageCount;
    long long _totalCount;
    long long _localMessageCount;
    WBMessage *_playingAudioMessage;
    WBMessage *_waitingAudioMessage;
    WBMessage *_selectedMessage;
    MMMessage *_latestMessage;
    MMFrequencyLimiter *_clearUnreadCountLimiter;
    WBTimelinePageInfo *_selectedPageInfo;
    WBContact *_selectedContact;
    NSMutableArray *_selectedLinks;
    NSString *_deleteAudioMessageID;
    MsgRemindBtnView *_msgRemindBtnView;
    UIButton *_unreadRemindBtn;
    NSString *_unreadRemindBtnTitle;
    long long _readCount;
    long long _unreadMsgCount;
    long long _deleteUnreadMsgCount;
    long long _fetchedMsgCount;
    NSIndexPath *_disappearIndexPath;
    NSIndexPath *_seperateIndexPath;
    long long _lastUnreadMsgID;
    long long _lastUnreadMsgTime;
    long long _lastReadMsgID;
    long long _mostRecentMsgId;
    struct CGRect _unreadRemindBtnBounds;
}

@property(nonatomic) _Bool isRepostFeedInfoCard; // @synthesize isRepostFeedInfoCard=_isRepostFeedInfoCard;
@property(nonatomic) _Bool isFirstFetchMsg; // @synthesize isFirstFetchMsg=_isFirstFetchMsg;
@property(nonatomic) _Bool isForbidNewMessage; // @synthesize isForbidNewMessage=_isForbidNewMessage;
@property(nonatomic) _Bool canClearUnreadMsg; // @synthesize canClearUnreadMsg=_canClearUnreadMsg;
@property(nonatomic) _Bool shouldTriggerHide; // @synthesize shouldTriggerHide=_shouldTriggerHide;
@property(nonatomic) long long mostRecentMsgId; // @synthesize mostRecentMsgId=_mostRecentMsgId;
@property(nonatomic) long long lastReadMsgID; // @synthesize lastReadMsgID=_lastReadMsgID;
@property(nonatomic) long long lastUnreadMsgTime; // @synthesize lastUnreadMsgTime=_lastUnreadMsgTime;
@property(nonatomic) long long lastUnreadMsgID; // @synthesize lastUnreadMsgID=_lastUnreadMsgID;
@property(nonatomic) int loadMoreType; // @synthesize loadMoreType=_loadMoreType;
@property(nonatomic) int refreshType; // @synthesize refreshType=_refreshType;
@property(retain, nonatomic) NSIndexPath *seperateIndexPath; // @synthesize seperateIndexPath=_seperateIndexPath;
@property(retain, nonatomic) NSIndexPath *disappearIndexPath; // @synthesize disappearIndexPath=_disappearIndexPath;
@property(nonatomic) long long fetchedMsgCount; // @synthesize fetchedMsgCount=_fetchedMsgCount;
@property(nonatomic) long long deleteUnreadMsgCount; // @synthesize deleteUnreadMsgCount=_deleteUnreadMsgCount;
@property(nonatomic) long long unreadMsgCount; // @synthesize unreadMsgCount=_unreadMsgCount;
@property(nonatomic) long long readCount; // @synthesize readCount=_readCount;
@property(nonatomic) struct CGRect unreadRemindBtnBounds; // @synthesize unreadRemindBtnBounds=_unreadRemindBtnBounds;
@property(copy, nonatomic) NSString *unreadRemindBtnTitle; // @synthesize unreadRemindBtnTitle=_unreadRemindBtnTitle;
@property(retain, nonatomic) UIButton *unreadRemindBtn; // @synthesize unreadRemindBtn=_unreadRemindBtn;
@property(retain, nonatomic) MsgRemindBtnView *msgRemindBtnView; // @synthesize msgRemindBtnView=_msgRemindBtnView;
@property(nonatomic) _Bool needIgnore; // @synthesize needIgnore=_needIgnore;
@property(nonatomic) _Bool isAfterViewWillAppear; // @synthesize isAfterViewWillAppear=_isAfterViewWillAppear;
@property(nonatomic) _Bool isRepostPageInfoCard; // @synthesize isRepostPageInfoCard=_isRepostPageInfoCard;
@property(nonatomic) _Bool isContinuousPlaying; // @synthesize isContinuousPlaying=_isContinuousPlaying;
@property(nonatomic) _Bool isWaitingForDownlaod; // @synthesize isWaitingForDownlaod=_isWaitingForDownlaod;
@property(copy, nonatomic) NSString *deleteAudioMessageID; // @synthesize deleteAudioMessageID=_deleteAudioMessageID;
@property(retain, nonatomic) NSMutableArray *selectedLinks; // @synthesize selectedLinks=_selectedLinks;
@property(retain, nonatomic) WBContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) WBTimelinePageInfo *selectedPageInfo; // @synthesize selectedPageInfo=_selectedPageInfo;
@property(retain, nonatomic) MMFrequencyLimiter *clearUnreadCountLimiter; // @synthesize clearUnreadCountLimiter=_clearUnreadCountLimiter;
@property(retain, nonatomic) MMMessage *latestMessage; // @synthesize latestMessage=_latestMessage;
@property(retain, nonatomic) WBMessage *selectedMessage; // @synthesize selectedMessage=_selectedMessage;
@property(retain, nonatomic) WBMessage *waitingAudioMessage; // @synthesize waitingAudioMessage=_waitingAudioMessage;
@property(retain, nonatomic) WBMessage *playingAudioMessage; // @synthesize playingAudioMessage=_playingAudioMessage;
@property(nonatomic) _Bool hasNewMore; // @synthesize hasNewMore=_hasNewMore;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long localMessageCount; // @synthesize localMessageCount=_localMessageCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(retain, nonatomic) NSArray *localMessages; // @synthesize localMessages=_localMessages;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) long long topNewMessageId; // @synthesize topNewMessageId=_topNewMessageId;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) unsigned long long newMessageRemindCount; // @synthesize newMessageRemindCount=_newMessageRemindCount;
@property(retain, nonatomic) UIButton *newMessageRemind; // @synthesize newMessageRemind=_newMessageRemind;
@property(retain, nonatomic) WBMessagesTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *emojiLocalPath; // @synthesize emojiLocalPath=_emojiLocalPath;
@property(retain, nonatomic) UIView *rainView; // @synthesize rainView=_rainView;
@property(retain, nonatomic) CALayer *moveLayer; // @synthesize moveLayer=_moveLayer;
@property(retain, nonatomic) NSTimer *clearTimer; // @synthesize clearTimer=_clearTimer;
@property(retain, nonatomic) NSTimer *endTimer; // @synthesize endTimer=_endTimer;
@property(retain, nonatomic) NSTimer *startTimer; // @synthesize startTimer=_startTimer;
@property(nonatomic) unsigned long long remindMsgType; // @synthesize remindMsgType=_remindMsgType;
@property(retain, nonatomic) WBMessage *messageRemind; // @synthesize messageRemind=_messageRemind;
@property(retain, nonatomic) UIAlertAction *confirmAction; // @synthesize confirmAction=_confirmAction;
@property(retain, nonatomic) WBAlertController *alert; // @synthesize alert=_alert;
@property(nonatomic) _Bool isZanEnable; // @synthesize isZanEnable=_isZanEnable;
@property(nonatomic) _Bool isFeedCardEnable; // @synthesize isFeedCardEnable=_isFeedCardEnable;
@property(retain, nonatomic) UIBarButtonItem *btnItemRight; // @synthesize btnItemRight=_btnItemRight;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(retain, nonatomic) WBIndicatorView *pullIndicatorView; // @synthesize pullIndicatorView=_pullIndicatorView;
@property(nonatomic) _Bool isLoadToLoadMore; // @synthesize isLoadToLoadMore=_isLoadToLoadMore;
@property(nonatomic) _Bool isPullToLoadMore; // @synthesize isPullToLoadMore=_isPullToLoadMore;
@property(retain, nonatomic) NSMutableDictionary *preLoadIndexPathDict; // @synthesize preLoadIndexPathDict=_preLoadIndexPathDict;
@property(nonatomic) _Bool pendingAssignFirstResponder; // @synthesize pendingAssignFirstResponder=_pendingAssignFirstResponder;
@property(retain, nonatomic) NSDictionary *fromDic; // @synthesize fromDic=_fromDic;
@property(retain, nonatomic) CALayer *bottomLayer; // @synthesize bottomLayer=_bottomLayer;
@property(nonatomic) _Bool isShowingPhotoVC; // @synthesize isShowingPhotoVC=_isShowingPhotoVC;
@property(retain, nonatomic) WBMessageSelectedView *viewAllSelected; // @synthesize viewAllSelected=_viewAllSelected;
@property(nonatomic) _Bool isShowSelected; // @synthesize isShowSelected=_isShowSelected;
@property(retain, nonatomic) NSMutableArray *muArrSelects; // @synthesize muArrSelects=_muArrSelects;
@property(nonatomic) long long mgsIdFromRemind; // @synthesize mgsIdFromRemind=_mgsIdFromRemind;
@property(nonatomic) _Bool isShowedSearchAnimation; // @synthesize isShowedSearchAnimation=_isShowedSearchAnimation;
@property(nonatomic) long long mgsIdFromSearch; // @synthesize mgsIdFromSearch=_mgsIdFromSearch;
@property(nonatomic) _Bool firstFetchHistoryMsgCompleted; // @synthesize firstFetchHistoryMsgCompleted=_firstFetchHistoryMsgCompleted;
@property(nonatomic) _Bool isEnteredFromMenu; // @synthesize isEnteredFromMenu=_isEnteredFromMenu;
@property(nonatomic) _Bool shouldPopToRootViewController; // @synthesize shouldPopToRootViewController=_shouldPopToRootViewController;
@property(retain, nonatomic) NSNumber *isScrollToBottom; // @synthesize isScrollToBottom=_isScrollToBottom;
@property(nonatomic) _Bool firstTimeViewWillAppear; // @synthesize firstTimeViewWillAppear=_firstTimeViewWillAppear;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) _Bool hasShowKeyboardFromScheme; // @synthesize hasShowKeyboardFromScheme=_hasShowKeyboardFromScheme;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *defaultContent; // @synthesize defaultContent=_defaultContent;
@property(retain, nonatomic) WBAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) MMInputManager *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) WBPrivateMessageProximityStateHintBoard *hintBoard; // @synthesize hintBoard=_hintBoard;
@property(retain, nonatomic) WBMessagePRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) WBMessageContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(retain, nonatomic) WBConversation *chat; // @synthesize chat=_chat;
@property(nonatomic) long long chatId; // @synthesize chatId=_chatId;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
- (void).cxx_destruct;
- (void)recordingAreadyStop;
- (_Bool)needsTitleBarWhenPeeking;
- (_Bool)registersPeekingGesture;
- (_Bool)accessibilityPerformMagicTap;
- (void)msgRemindBtnViewDidSelected:(id)arg1 info:(id)arg2;
- (void)AddExtralMessagesToGroups;
- (void)showUnreadMsgBtn;
- (id)userTarget;
- (void)didSelectUserTarget:(id)arg1;
- (void)didSelectUserTarget:(id)arg1 withImageIndex:(long long)arg2;
- (void)forwardMessageToGroup:(id)arg1 withImageIndex:(long long)arg2;
- (void)contactMessageViewController:(id)arg1 didSelectContact:(id)arg2 withImageIndex:(long long)arg3;
- (void)forwardMessageToGroup:(id)arg1;
- (void)contactMessageViewController:(id)arg1 didSelectContact:(id)arg2;
- (_Bool)frequencyMaxElapseReached:(id)arg1;
- (_Bool)frequencyMaxIntervalReached:(id)arg1;
- (void)sendPageinfoImageMessage:(id)arg1;
- (void)sendImageMessages:(id)arg1;
- (void)clearChatUnreadCountWithMessage:(id)arg1;
- (void)audioPlayer:(id)arg1 proximityStateChanged:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didFinishPlayingFile:(id)arg2;
- (void)audioPlayer:(id)arg1 didPlayFileCompletely:(id)arg2;
- (void)messageAudioCell:(id)arg1 downloadAudioFileForMessage:(id)arg2;
- (void)likeButtonPressed:(id)arg1 message:(id)arg2;
- (void)inviteButtonPressed:(id)arg1 message:(id)arg2;
- (void)resumeCroppedSmallImage;
- (void)mapButtonPressed:(id)arg1 message:(id)arg2;
- (void)dosomethingAfterLoadingPhoto:(id)arg1;
- (void)photoButtonPressed:(id)arg1 message:(id)arg2;
- (void)messageCell:(id)arg1 didPressPhoneNumber:(id)arg2;
- (void)didSelectedErrorView:(id)arg1 message:(id)arg2;
- (void)didTouchBubbleImageView:(id)arg1 message:(id)arg2;
- (void)avatarViewPressed:(id)arg1 message:(id)arg2;
- (void)messageCell:(id)arg1 longPressed:(id)arg2;
- (void)avatarViewLongPressed:(id)arg1 message:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (void)editGroupName;
- (void)updateFollowNoticeMsgStatus:(_Bool)arg1;
- (void)redEnvelopeNoticeCell:(id)arg1 didPressActiveRange:(id)arg2 message:(id)arg3;
- (void)imgViewController:(id)arg1 repostImageIndex:(long long)arg2;
- (void)imgViewController:(id)arg1 repostImage:(id)arg2;
- (void)imgViewControllerDidDismiss:(id)arg1;
- (void)imgViewControllerWillDismiss:(id)arg1;
- (void)storyMessageCell:(id)arg1 didPressStory:(id)arg2;
- (void)didLongPressText:(id)arg1 message:(id)arg2 gesture:(id)arg3;
- (void)didLongPressImage:(id)arg1 message:(id)arg2 gesture:(id)arg3;
- (void)didPressPhoneNumber:(id)arg1 message:(id)arg2 phoneNumber:(id)arg3;
- (void)fetchPicInfoForMessages:(id)arg1;
- (void)didPressCard:(id)arg1 message:(id)arg2 gesture:(id)arg3;
- (void)didPressImage:(id)arg1 message:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)otherHandleForPressCardMessage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)shouldResetMessageUserInfoCache:(id)arg1;
- (id)lastMessageInGroup:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPopFromPeeking;
- (void)viewDidStartPeeking;
- (_Bool)needRemoveKeyboardNotifications;
- (void)addAnimation;
- (void)showRain;
- (void)clearRainFunc;
- (void)endRainFunc;
- (void)stopAllRainFunc;
- (void)emojirain;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configSubviewsFrame;
- (void)checkShowMsgRemindView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupNavigationItemWithSelected:(_Bool)arg1;
- (void)loadMessagesIfNeeded;
- (void)viewDidLoad;
- (_Bool)shouldBackToMessageHome;
- (void)loadView;
- (void)moreButtonPressed:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)messageDidRemoveSuccess:(_Bool)arg1;
- (void)newMessageLoadingDidSucceedWithIsFirstLoad:(_Bool)arg1;
- (void)messageLoadingDidSucceedWithAction:(int)arg1;
- (double)desiredBaseContentInsetTop;
- (double)contentTopInset;
- (void)reloadDataAfterLoadLocalRecentMessages:(id)arg1;
- (void)reloadDataAfterLoadNewMessages:(id)arg1 isFirstLoad:(_Bool)arg2;
- (void)reloadDataAfterLoadMessages:(long long)arg1 offset:(long long)arg2;
- (void)loadMessages;
- (void)preLoadWithIndexPath:(id)arg1;
- (void)downloadAudioFileForMessage:(id)arg1;
- (void)playAudioMessage:(id)arg1;
- (void)audioButtonPressed:(id)arg1 message:(id)arg2;
- (id)nextUnReadAudioAfterPlayingMessage:(id)arg1;
- (void)updateCellForMessage:(id)arg1;
- (void)updateCellForMessage:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathForMessage:(id)arg1;
- (id)messageById:(unsigned long long)arg1 indexPath:(id *)arg2;
- (_Bool)didPressOkButtonInCustomTextInputModalView:(id)arg1;
- (_Bool)didPressCancelButtonInCustomTextInputModalView:(id)arg1;
- (void)recallMessage:(id)arg1;
- (void)openDownloadFilePage:(id)arg1 downLoadFile:(_Bool)arg2;
- (void)downloadFileForMessage:(id)arg1;
- (void)messageCell:(id)arg1 downloadFileForMessage:(id)arg2;
- (void)fileDownLoadViewController:(id)arg1 reportMessage:(id)arg2;
- (void)fileDownLoadViewController:(id)arg1 resendMessage:(id)arg2;
- (void)tapPhoneNumber:(id)arg1;
- (void)openMessageLink:(id)arg1;
- (void)copyMessage:(id)arg1;
- (void)reportMessage:(id)arg1;
- (void)shareMessage:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)checkAndStopPlayingAudioMessageBeforeDelete:(id)arg1;
- (void)repostMessage:(id)arg1;
- (void)actionRepostMessage;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)longPressed:(id)arg1;
- (id)menuItemsWithMessage:(id)arg1;
- (void)sendMessage:(id)arg1 forward:(_Bool)arg2;
- (void)unreadRemindBtnClick:(id)arg1;
- (void)backBarButtonClick:(id)arg1;
- (void)panNavigationDidFinish:(id)arg1 willPop:(_Bool)arg2;
- (void)nextAction:(id)arg1;
- (_Bool)isAllSelected;
- (void)setAllSelects;
- (void)resetSelects;
- (void)downInputView;
- (void)setDefaultInputText;
- (void)restoreDataAgainstMemoryWarning;
- (_Bool)getMessageHasMore:(id)arg1 serverCheck:(_Bool)arg2;
- (void)setTitleForNavigationBar;
- (_Bool)panToNavigation;
- (id)getVCAnalysisParameters;
- (void)initializeLayout;
- (void)triggerEasterEgg:(id)arg1 sentByMe:(_Bool)arg2;
- (void)reloadDataAfterSendMessage:(id)arg1;
- (_Bool)checkMessagesForChatInvisible;
- (void)messageDidAdd:(unsigned long long)arg1 scrollToRow:(_Bool)arg2;
- (void)messageDidAdd:(unsigned long long)arg1;
- (void)reloadTableViewData;
- (void)AdjustUIWhenScreenOrientationChanged;
- (id)fID;
- (id)currentUser;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)handleMemoryWarning;
- (void)dealloc;
- (void)removeObserverAndDelegate;
- (void)dismissRemindView:(id)arg1 animation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showRemindView:(id)arg1 animation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isInGroupsMessage:(id)arg1;
- (_Bool)isOnShowingMessage:(id)arg1;
- (void)updateLastUnreadMsgWith:(id)arg1;
- (void)AddExtralMessagesToGroups;
- (void)showUnreadMsgBtn;
- (void)updateNewMessageRemindButtonFrame;
- (void)refreshNewMessageRemindButtonWithNewMessages:(id)arg1;
- (void)messageViewWillScrollToBottom;
- (void)messageViewDidEndDragging:(id)arg1;
- (void)messageViewWillBeginDragging:(id)arg1;
- (void)messageViewDidScroll:(id)arg1;
- (id)createNewMessageRemindButton;
- (void)tapNewMessageRemindButton:(id)arg1;
- (void)dismissNewMessageRemindButton:(id)arg1;
- (void)showNewMessageRemindButton:(id)arg1;
- (void)adjustTitleEdgeInsets:(id)arg1;
- (void)tableViewScrollToTopOfNewMessages:(id)arg1;
- (_Bool)isTopDirectionOfScrollingInScrollView:(id)arg1;
- (_Bool)needAddNewMessageRemindCount:(id)arg1;
- (_Bool)scrollToBottomJustReceivedNewMessage;
- (void)clearCellHeightCache;
- (void)viewWillTransition:(id)arg1;
- (void)addObserver;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)imageErrorLog:(id)arg1;
- (void)recallMsg:(id)arg1;
- (void)groupMessageDeletedSync:(id)arg1;
- (void)deleteGroupMessages:(id)arg1;
- (void)audioMessageDownload:(id)arg1;
- (void)didDeleteConversationNotification:(id)arg1;
- (void)pageCardInfoRecivedNotification:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)attachmentSendProgressChange:(id)arg1;
- (void)fetchUsersInfo:(id)arg1;
- (void)chatUnreadCountChanged:(id)arg1;
- (void)chatsDidUpdateAfterFetchUserlist:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)newMessageReceived:(id)arg1;
- (void)messageDeletedSync:(id)arg1;
- (void)refreshExpiredImage:(id)arg1;
- (void)clearAudioMessageUnreadCount:(id)arg1;
- (void)messageStatusChanged:(id)arg1;
- (void)changeChatTypeInMemory;
- (void)messagesFetched:(id)arg1;
- (void)message:(id)arg1 securityForCode:(int)arg2 question:(id)arg3 securityCodeUrl:(id)arg4;
- (void)popToViewController;
- (id)findOverGlobalIdMessages;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updateCellWhenSendMessageSuccess:(id)arg1 atIndexPath:(id)arg2;
- (void)refreshMessageViewAfterDeleteMessages:(id)arg1;
- (void)hideMenuIfNeed;
- (void)checkHideMenuWithGlobalId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

