//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface CRKView : NSView
{
    BOOL _suppressMouseDown;
    NSColor *_crk_backgroundColor;
    NSColor *_crk_borderColor;
}

@property(nonatomic) BOOL suppressMouseDown; // @synthesize suppressMouseDown=_suppressMouseDown;
@property(retain, nonatomic) NSColor *crk_borderColor; // @synthesize crk_borderColor=_crk_borderColor;
@property(retain, nonatomic) NSColor *crk_backgroundColor; // @synthesize crk_backgroundColor=_crk_backgroundColor;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)updateLayer;
- (void)buildView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
