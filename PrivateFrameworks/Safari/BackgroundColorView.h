//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ConfigurableVibrancyView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface BackgroundColorView : ConfigurableVibrancyView
{
    BOOL _continuousCorners;
    NSColor *_backgroundColor;
    double _cornerRadius;
}

@property(nonatomic) BOOL continuousCorners; // @synthesize continuousCorners=_continuousCorners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)_updateLayerFromProperties;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

