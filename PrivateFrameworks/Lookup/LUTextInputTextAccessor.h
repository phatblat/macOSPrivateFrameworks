//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Lookup/LUTextAccessor.h>

@class NSView<NSTextInput>;

__attribute__((visibility("hidden")))
@interface LUTextInputTextAccessor : LUTextAccessor
{
    NSView<NSTextInput> *_textInputView;
}

+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) NSView<NSTextInput> *textInputView; // @synthesize textInputView=_textInputView;
- (void).cxx_destruct;
- (id)termForRange:(struct _NSRange)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (void)dealloc;

@end

