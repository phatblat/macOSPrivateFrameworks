//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTZoomController : NSObject
{
    double _zoomFactor;
    double _checklistZoomFactor;
}

@property(nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (struct NSFont *)unzoomFont:(struct NSFont *)arg1;
- (struct NSFont *)zoomFont:(struct NSFont *)arg1;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomAttributedString:(id)arg1;
- (id)zoomAttributedString:(id)arg1;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomAttributes:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomFontInAttributes:(id)arg1;
- (id)init;

@end

