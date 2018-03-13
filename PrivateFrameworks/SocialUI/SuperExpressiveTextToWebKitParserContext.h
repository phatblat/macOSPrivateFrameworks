//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMFromSuperParserContext.h"

@class DOMHTMLElement, IMExpressiveSendAsTextChatItem, NSString, TranscriptDOMController;

@interface SuperExpressiveTextToWebKitParserContext : IMFromSuperParserContext
{
    BOOL _hasInteractableText;
    BOOL _isFileTransferElement;
    BOOL _isMediaElement;
    BOOL _isPassElement;
    BOOL _isAudioMessage;
    BOOL _willFillBubble;
    BOOL _didTrimEmotePrefix;
    BOOL _displayBigEmoji;
    IMExpressiveSendAsTextChatItem *_chatItem;
    TranscriptDOMController *_controller;
    DOMHTMLElement *_messageElement;
    DOMHTMLElement *_containerElement;
    NSString *_expressiveText;
}

@property(readonly, nonatomic) NSString *expressiveText; // @synthesize expressiveText=_expressiveText;
@property(retain, nonatomic) DOMHTMLElement *containerElement; // @synthesize containerElement=_containerElement;
@property BOOL displayBigEmoji; // @synthesize displayBigEmoji=_displayBigEmoji;
@property BOOL didTrimEmotePrefix; // @synthesize didTrimEmotePrefix=_didTrimEmotePrefix;
@property BOOL willFillBubble; // @synthesize willFillBubble=_willFillBubble;
@property BOOL isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property BOOL isPassElement; // @synthesize isPassElement=_isPassElement;
@property BOOL isMediaElement; // @synthesize isMediaElement=_isMediaElement;
@property BOOL isFileTransferElement; // @synthesize isFileTransferElement=_isFileTransferElement;
@property BOOL hasInteractableText; // @synthesize hasInteractableText=_hasInteractableText;
@property(nonatomic) DOMHTMLElement *messageElement; // @synthesize messageElement=_messageElement;
@property(nonatomic) TranscriptDOMController *controller; // @synthesize controller=_controller;
@property(nonatomic) IMExpressiveSendAsTextChatItem *chatItem; // @synthesize chatItem=_chatItem;
- (void).cxx_destruct;
- (BOOL)shouldPreprocess;
- (void)parserDidEnd:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)_outMessageElementAsString;
- (id)name;
- (void)_appendText:(id)arg1 toElement:(id)arg2;
- (BOOL)_workaroundWebKitLineHeightBug;
- (id)outMessageElement;
- (id)initWithChatItem:(id)arg1 textToParse:(id)arg2 elementName:(id)arg3 domController:(id)arg4;

@end

