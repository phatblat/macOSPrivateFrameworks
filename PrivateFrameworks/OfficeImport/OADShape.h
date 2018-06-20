//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADGraphic.h>

@class OADOrientedBounds, OADShapeGeometry, OADTextBody;

@interface OADShape : OADGraphic
{
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
    OADOrientedBounds *mTextOrientedBounds;
}

@property(retain, nonatomic) OADOrientedBounds *textOrientedBounds; // @synthesize textOrientedBounds=mTextOrientedBounds;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isTextBox;
- (void)createPresetGeometryWithShapeType:(int)arg1;
- (void)removeUnnecessaryOverrides;
- (void)flattenProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)shapeStyle;
- (id)shapeProperties;
- (int)type;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (id)init;

@end

