//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSAttributedString, NSDictionary, NSView;

@protocol NSDefinitionExternalModule
- (void)showDefinitionByHotKey;
- (void)showDefinitionForString:(NSAttributedString *)arg1 range:(struct _NSRange)arg2 options:(NSDictionary *)arg3 originProvider:(void *)arg4 inView:(NSView *)arg5;

@optional
- (id <NSImmediateActionAnimationController>)lookupAnimationControllerForString:(NSAttributedString *)arg1 range:(struct _NSRange)arg2 options:(NSDictionary *)arg3 originProvider:(void *)arg4 inView:(NSView *)arg5;
@end

