//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class NSString;

@interface KHProjectTextStyle : KHModel
{
    long long _projectId;
    long long _styleId;
    NSString *_font;
    long long _fontSize;
    double _leading;
    double _kerning;
    long long _verticalAlignment;
    long long _horizontalAlignment;
    NSString *_color;
    double _lineSpacing;
    NSString *_styleIdentifier;
}

- (id)cloneInDatabase:(id)arg1;
- (id)clone;
- (void)cacheColumns:(long long)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)cacheLineSpacing:(double)arg1;
- (double)lineSpacing;
- (void)setColor:(id)arg1;
- (void)cacheColor:(id)arg1;
- (id)color;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)cacheHorizontalAlignment:(long long)arg1;
- (long long)horizontalAlignment;
- (void)setVerticalAlignment:(long long)arg1;
- (void)cacheVerticalAlignment:(long long)arg1;
- (long long)verticalAlignment;
- (void)setKerning:(double)arg1;
- (void)cacheKerning:(double)arg1;
- (double)kerning;
- (void)setLeading:(double)arg1;
- (void)cacheLeading:(double)arg1;
- (double)leading;
- (void)setFontSize:(long long)arg1;
- (void)cacheFontSize:(long long)arg1;
- (long long)fontSize;
- (void)setFont:(id)arg1;
- (void)cacheFont:(id)arg1;
- (id)font;
- (void)setStyleIdentifier:(id)arg1;
- (void)cacheStyleIdentifier:(id)arg1;
- (id)styleIdentifier;
- (void)setStyleId:(long long)arg1;
- (void)cacheStyleId:(long long)arg1;
- (long long)styleId;
- (void)setProjectId:(long long)arg1;
- (void)cacheProjectId:(long long)arg1;
- (long long)projectId;
- (BOOL)isProjectModel;
- (void)dealloc;

@end

