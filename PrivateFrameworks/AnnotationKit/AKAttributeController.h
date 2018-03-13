//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController, AKPageModelController, NSColor, NSDictionary, NSFont, NSString, PKInk;

@interface AKAttributeController : NSObject
{
    BOOL _useThickInks;
    BOOL _strokeIsDashed;
    BOOL _hasShadow;
    AKPageModelController *modelControllerToObserveForSelections;
    NSColor *_strokeColor;
    NSColor *_fillColor;
    NSString *_inkIdentifier;
    PKInk *_ink;
    double _strokeWidth;
    long long _brushStyle;
    unsigned long long _arrowHeadStyle;
    NSFont *_font;
    NSDictionary *_textAttributes;
    long long _highlightStyle;
    AKController *_controller;
}

+ (void)initialize;
+ (id)defaultTextAttributes;
+ (id)defaultFont;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain) NSFont *font; // @synthesize font=_font;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property BOOL strokeIsDashed; // @synthesize strokeIsDashed=_strokeIsDashed;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) BOOL useThickInks; // @synthesize useThickInks=_useThickInks;
@property(retain, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
@property(retain) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections; // @synthesize modelControllerToObserveForSelections;
- (void).cxx_destruct;
- (void)_updateStateOnSenderFromSelf:(id)arg1 segment:(long long)arg2;
- (BOOL)_updateStateOnSender:(id)arg1 segment:(long long)arg2 fromSelectedAnnotations:(id)arg3;
- (long long)_allAnnotations:(id)arg1 shareAttributeFromTag:(long long)arg2;
- (void)_allAnnotations:(id)arg1 all:(char *)arg2 atLeastOneShare:(char *)arg3 attributeFromTag:(long long)arg4;
- (void)_updateStateOnSender:(id)arg1 segment:(long long)arg2;
- (BOOL)_isEnabledForSender:(id)arg1 segment:(long long)arg2 withSelectedAnnotations:(id)arg3;
- (void)syncStrokeColorOnSelectionToUI;
- (void)syncFillColorOnSelectionToUI;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(long long)arg2;
- (void)_restorePersistedAttributes;
- (void)_persistCurrentAttributes;
- (void)_updateInk;
- (void)resetToLastDrawingInk;
- (void)setDefaultInkIdentifier;
- (void)restoreStrokeColorToSystemDefault;
- (BOOL)strokeColorIsEqualTo:(id)arg1;
- (void)updateAttributeSenderState:(id)arg1 segment:(long long)arg2 enabled:(BOOL)arg3;
- (BOOL)isAttributeSenderEnabled:(id)arg1 segment:(long long)arg2;
- (void)performAttributeActionForSender:(id)arg1 segment:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1;

@end

