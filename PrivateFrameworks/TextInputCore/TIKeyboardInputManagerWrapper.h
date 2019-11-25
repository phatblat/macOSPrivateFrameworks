//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIKeyboardInputManagerStub.h"

@class TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub
{
    TIKeyboardInputManagerBase *_inputManager;
    id <TIKeyboardInputManagerLogging> _logger;
    id <TIClientProxy> _clientProxy;
}

@property(retain, nonatomic) id <TIClientProxy> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(retain, nonatomic) id <TIKeyboardInputManagerLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) TIKeyboardInputManagerBase *inputManager; // @synthesize inputManager=_inputManager;
- (void).cxx_destruct;
- (void)writeTypologyLogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)textAccepted:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)smartSelectionForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleAcceptedCandidate:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 requestToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardInput:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2;
- (void)updateAnalyticsForRejectedSuggestion:(id)arg1 keyboardState:(id)arg2;
- (void)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardState:(id)arg1;
- (id)init;

@end

