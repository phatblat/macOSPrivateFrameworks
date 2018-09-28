//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPTheme, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface LPCSSResolver : NSObject
{
    BOOL _useInlineStyles;
    BOOL _useVariablesWhenUsingInlineStyles;
    BOOL _includeClassNamesWhenUsingInlineStyles;
    BOOL _includeDarkInterfaceInlineStyles;
    BOOL _generateEmailCompatibleMarkup;
    NSMutableDictionary *_localVariables;
    NSMutableSet *_pendingVariables;
    LPTheme *_theme;
}

@property(nonatomic) BOOL generateEmailCompatibleMarkup; // @synthesize generateEmailCompatibleMarkup=_generateEmailCompatibleMarkup;
@property(nonatomic) BOOL includeDarkInterfaceInlineStyles; // @synthesize includeDarkInterfaceInlineStyles=_includeDarkInterfaceInlineStyles;
@property(nonatomic) BOOL includeClassNamesWhenUsingInlineStyles; // @synthesize includeClassNamesWhenUsingInlineStyles=_includeClassNamesWhenUsingInlineStyles;
@property(nonatomic) BOOL useVariablesWhenUsingInlineStyles; // @synthesize useVariablesWhenUsingInlineStyles=_useVariablesWhenUsingInlineStyles;
@property(nonatomic) BOOL useInlineStyles; // @synthesize useInlineStyles=_useInlineStyles;
@property(readonly, nonatomic) LPTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) NSMutableSet *pendingVariables; // @synthesize pendingVariables=_pendingVariables;
@property(readonly, nonatomic) NSMutableDictionary *localVariables; // @synthesize localVariables=_localVariables;
- (void).cxx_destruct;
- (id)themeVariablesAsCSSVariables;
- (id)localVariablesAsCSSVariables;
- (void)registerAlternateStyle:(id)arg1 inComponent:(id)arg2;
- (void)setStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)addStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (id)buildStyleSheet;
- (id)components;
- (id)ruleDictionaryForStyle:(id)arg1 forComponentClass:(Class)arg2 withDarkInterface:(BOOL)arg3;
- (void)buildPendingVariableSetForRuleDictionary:(id)arg1;
- (id)buildInlineStyleForRuleDictionary:(id)arg1;
- (void)buildCSSDeclarationsFromRuleDictionary:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3 spacer:(id)arg4 forBuffer:(id)arg5;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)resolveCSSValue:(id)arg1;
@property(readonly, nonatomic) BOOL useCSSVariables;
- (id)initWithTheme:(id)arg1;

@end

