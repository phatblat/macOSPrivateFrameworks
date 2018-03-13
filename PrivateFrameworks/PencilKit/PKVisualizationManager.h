//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHVisualizationManagerDelegate.h"

@class CHVisualizationManager, NSString;

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate>
{
    id <PKVisualizationManager> _delegate;
    CHVisualizationManager *_chVisualizationManager;
}

+ (id)localizedNameForRecognitionStatusKey:(id)arg1;
+ (id)availableRecognitionStatusKeys;
@property(retain, nonatomic) CHVisualizationManager *chVisualizationManager; // @synthesize chVisualizationManager=_chVisualizationManager;
@property(nonatomic) __weak id <PKVisualizationManager> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)visualizationManagerDidUpdateSessionStatus:(id)arg1;
- (void)visualizationManagerNeedsDisplay:(id)arg1;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (id)valueForRecognitionStatusKey:(id)arg1;
@property(nonatomic) BOOL recognitionStatusReportingEnabled;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

