//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@interface CommonMessageViewModel : BaseMessageViewModel
{
    unsigned long long m_bgBubbleType;
    unsigned long long m_maskBubbleType;
    _Bool m_isShowChatRoomDisplayName;
}

- (id)accessibilityDescription;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)maskBubbleInfo;
- (id)bgBubbleInfo;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)souceIconBgIsShow;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (_Bool)calIsShowChatRoomDisplayName;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (void)updateChatContact:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

