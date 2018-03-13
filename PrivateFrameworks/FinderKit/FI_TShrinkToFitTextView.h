//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TTextView.h>

@class FI_TShrinkToFitController, NSWindow;

__attribute__((visibility("hidden")))
@interface FI_TShrinkToFitTextView : FI_TTextView
{
    struct TNSRef<FI_TShrinkToFitWindow *, void> _stfWindow;
    struct TNSRef<NSWindow *, void> _parentWindow;
    struct CGRect _maxGlobalFrame;
    unsigned long long _maxUniChars;
    long long _maxNumLines;
    FI_TShrinkToFitController *_controller;
}

@property(nonatomic) FI_TShrinkToFitController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long maxNumLines; // @synthesize maxNumLines=_maxNumLines;
@property(nonatomic) unsigned long long maxUniChars; // @synthesize maxUniChars=_maxUniChars;
@property(nonatomic) struct CGRect maxGlobalFrame; // @synthesize maxGlobalFrame=_maxGlobalFrame;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)quickLookWithEvent:(id)arg1;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)arg1 withRecognizer:(id)arg2;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)setMinSize:(struct CGSize)arg1;
- (void)setFont:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)shouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (_Bool)isEditing;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditing;
- (void)didChangeText;
- (void)setString:(id)arg1;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (void)configureAttributes;
@property(retain, nonatomic) NSWindow *parentWindow;
- (void)dealloc;
- (id)init;

@end

