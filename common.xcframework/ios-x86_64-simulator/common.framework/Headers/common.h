#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonAddMealForm, CommonKotlinUnit, CommonChangeMealImageUseCaseInput, CommonMeal, CommonNewImage, CommonAddMeal, CommonDatabaseCompanion, CommonMealEntity, CommonRuntimeQuery<__covariant RowType>, CommonKotlinx_datetimeLocalDate, CommonAddMealCompanion, CommonAddMealFormCompanion, CommonMealCompanion, CommonKotlinByteArray, CommonNewImageCompanion, CommonKotlinx_datetimeMonth, CommonKotlinx_datetimeLocalDateCompanion, CommonKotlinx_datetimeDayOfWeek, CommonKoin_coreScope, CommonKoin_coreParametersHolder, CommonKotlinLazyThreadSafetyMode, CommonKoin_coreModule, CommonKoin_coreLogger, CommonKoin_coreInstanceRegistry, CommonKoin_corePropertyRegistry, CommonKoin_coreScopeRegistry, CommonKoin_coreKoin, CommonKtor_httpContentTypeImage, CommonKtor_httpContentType, CommonKoin_coreKoinApplication, CommonKotlinx_serialization_jsonJson, CommonKotlinThrowable, CommonKotlinArray<T>, CommonKotlinException, CommonKotlinRuntimeException, CommonKotlinIllegalStateException, CommonRuntimeTransacterTransaction, CommonKotlinByteIterator, CommonKotlinEnumCompanion, CommonKotlinEnum<E>, CommonKoin_coreParametersHolderCompanion, CommonKoin_coreInstanceFactory<T>, CommonKotlinPair<__covariant A, __covariant B>, CommonKoin_coreScopeDSL, CommonKoin_coreSingleInstanceFactory<T>, CommonKoin_coreLevel, CommonKoin_coreScopeRegistryCompanion, CommonKtor_httpHeaderValueParam, CommonKtor_httpHeaderValueWithParametersCompanion, CommonKtor_httpHeaderValueWithParameters, CommonKtor_httpContentTypeCompanion, CommonKoin_coreKoinApplicationCompanion, CommonKotlinx_serialization_coreSerializersModule, CommonKotlinx_serialization_jsonJsonConfiguration, CommonKotlinx_serialization_jsonJsonDefault, CommonKotlinx_serialization_jsonJsonElement, CommonKotlinx_serialization_coreSerialKind, CommonKotlinNothing, CommonKoin_coreBeanDefinition<T>, CommonKoin_coreInstanceFactoryCompanion, CommonKoin_coreInstanceContext, CommonKotlinx_serialization_jsonJsonElementCompanion, CommonKoin_coreKind, CommonKoin_coreCallbacks<T>;

@protocol CommonIUseCase, CommonMealRepository, CommonKotlinx_coroutines_coreFlow, CommonDbQueries, CommonRuntimeTransactionWithoutReturn, CommonRuntimeTransactionWithReturn, CommonRuntimeTransacter, CommonDatabase, CommonRuntimeSqlDriver, CommonRuntimeSqlDriverSchema, CommonIMeal, CommonKotlinx_serialization_coreKSerializer, CommonKotlinComparable, CommonKoin_coreKoinScopeComponent, CommonKoin_coreQualifier, CommonKotlinKClass, CommonKotlinLazy, CommonKotlinx_coroutines_coreFlowCollector, CommonRuntimeTransactionCallbacks, CommonRuntimeSqlPreparedStatement, CommonRuntimeSqlCursor, CommonRuntimeCloseable, CommonRuntimeQueryListener, CommonKotlinx_serialization_coreEncoder, CommonKotlinx_serialization_coreSerialDescriptor, CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinx_serialization_coreDecoder, CommonKotlinx_serialization_coreDeserializationStrategy, CommonKoin_coreScopeCallback, CommonKoin_coreKoinComponent, CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier, CommonKotlinx_serialization_coreSerialFormat, CommonKotlinx_serialization_coreStringFormat, CommonKotlinIterator, CommonKotlinx_serialization_coreCompositeEncoder, CommonKotlinAnnotation, CommonKotlinx_serialization_coreCompositeDecoder, CommonKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CommonBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CommonBase (CommonBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CommonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCommonKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CommonNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CommonByte : CommonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CommonUByte : CommonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CommonShort : CommonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CommonUShort : CommonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CommonInt : CommonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CommonUInt : CommonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CommonLong : CommonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CommonULong : CommonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CommonFloat : CommonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CommonDouble : CommonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CommonBoolean : CommonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdGenerator")))
@interface CommonIdGenerator : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)generate __attribute__((swift_name("generate()")));
@end;

__attribute__((swift_name("IUseCase")))
@protocol CommonIUseCase
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(id _Nullable)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddMealUseCase")))
@interface CommonAddMealUseCase : CommonBase <CommonIUseCase>
- (instancetype)initWithRepository:(id<CommonMealRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(CommonAddMealForm *)input completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChangeMealImageUseCase")))
@interface CommonChangeMealImageUseCase : CommonBase <CommonIUseCase>
- (instancetype)initWithRepository:(id<CommonMealRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(CommonChangeMealImageUseCaseInput *)input completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChangeMealImageUseCase.Input")))
@interface CommonChangeMealImageUseCaseInput : CommonBase
- (instancetype)initWithMeal:(CommonMeal *)meal image:(CommonNewImage * _Nullable)image __attribute__((swift_name("init(meal:image:)"))) __attribute__((objc_designated_initializer));
- (CommonMeal *)component1 __attribute__((swift_name("component1()")));
- (CommonNewImage * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CommonChangeMealImageUseCaseInput *)doCopyMeal:(CommonMeal *)meal image:(CommonNewImage * _Nullable)image __attribute__((swift_name("doCopy(meal:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonNewImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CommonMeal *meal __attribute__((swift_name("meal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMealUseCase")))
@interface CommonDeleteMealUseCase : CommonBase <CommonIUseCase>
- (instancetype)initWithRepository:(id<CommonMealRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(CommonMeal *)input completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetCurrentTimeToCookedDateMealUseCase")))
@interface CommonSetCurrentTimeToCookedDateMealUseCase : CommonBase <CommonIUseCase>
- (instancetype)initWithRepository:(id<CommonMealRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(CommonMeal *)input completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end;

__attribute__((swift_name("MealRepository")))
@protocol CommonMealRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addMeal:(CommonAddMeal *)meal newImage:(CommonNewImage * _Nullable)newImage completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(meal:newImage:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMealId:(NSString *)mealId completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(mealId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetch(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMealId:(NSString *)mealId completionHandler:(void (^)(CommonMeal * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(mealId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reset(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMeal:(CommonMeal *)meal newImage:(CommonNewImage * _Nullable)newImage completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(meal:newImage:completionHandler:)")));
@property (readonly) NSArray<CommonMeal *> *meals __attribute__((swift_name("meals")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> mealsFlow __attribute__((swift_name("mealsFlow")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol CommonRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<CommonRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<CommonRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("Database")))
@protocol CommonDatabase <CommonRuntimeTransacter>
@required
@property (readonly) id<CommonDbQueries> dbQueries __attribute__((swift_name("dbQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseCompanion")))
@interface CommonDatabaseCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonDatabase>)invokeDriver:(id<CommonRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<CommonRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("DbQueries")))
@protocol CommonDbQueries <CommonRuntimeTransacter>
@required
- (void)deleteMealId:(NSString *)mealId __attribute__((swift_name("delete(mealId:)")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (CommonRuntimeQuery<CommonMealEntity *> *)getMealId:(NSString *)mealId __attribute__((swift_name("get(mealId:)")));
- (CommonRuntimeQuery<id> *)getMealId:(NSString *)mealId mapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("get(mealId:mapper:)")));
- (CommonRuntimeQuery<CommonMealEntity *> *)getAll __attribute__((swift_name("getAll()")));
- (CommonRuntimeQuery<id> *)getAllMapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("getAll(mapper:)")));
- (void)insertMealEntity:(CommonMealEntity *)MealEntity __attribute__((swift_name("insert(MealEntity:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)updateTitle:(NSString *)title description:(NSString *)description imageUri:(NSString * _Nullable)imageUri lastCookingDate:(NSString *)lastCookingDate id:(NSString *)id __attribute__((swift_name("update(title:description:imageUri:lastCookingDate:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealEntity")))
@interface CommonMealEntity : CommonBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title description:(NSString *)description imageUri:(NSString * _Nullable)imageUri lastCookingDate:(NSString *)lastCookingDate __attribute__((swift_name("init(id:title:description:imageUri:lastCookingDate:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (CommonMealEntity *)doCopyId:(NSString *)id title:(NSString *)title description:(NSString *)description imageUri:(NSString * _Nullable)imageUri lastCookingDate:(NSString *)lastCookingDate __attribute__((swift_name("doCopy(id:title:description:imageUri:lastCookingDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUri __attribute__((swift_name("imageUri")));
@property (readonly) NSString *lastCookingDate __attribute__((swift_name("lastCookingDate")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("IMeal")))
@protocol CommonIMeal
@required
- (id<CommonIMeal>)updateImageImage:(NSString * _Nullable)image __attribute__((swift_name("updateImage(image:)")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CommonKotlinx_datetimeLocalDate *lastCookingDate __attribute__((swift_name("lastCookingDate")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddMeal")))
@interface CommonAddMeal : CommonBase <CommonIMeal>
- (instancetype)initWithTitle:(NSString *)title description:(NSString *)description image:(NSString * _Nullable)image lastCookingDate:(CommonKotlinx_datetimeLocalDate *)lastCookingDate __attribute__((swift_name("init(title:description:image:lastCookingDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonAddMealCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonKotlinx_datetimeLocalDate *)component4 __attribute__((swift_name("component4()")));
- (CommonAddMeal *)doCopyTitle:(NSString *)title description:(NSString *)description image:(NSString * _Nullable)image lastCookingDate:(CommonKotlinx_datetimeLocalDate *)lastCookingDate __attribute__((swift_name("doCopy(title:description:image:lastCookingDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CommonAddMeal *)updateImageImage:(NSString * _Nullable)image __attribute__((swift_name("updateImage(image:)")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CommonKotlinx_datetimeLocalDate *lastCookingDate __attribute__((swift_name("lastCookingDate")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddMeal.Companion")))
@interface CommonAddMealCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonAddMealCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddMealForm")))
@interface CommonAddMealForm : CommonBase
- (instancetype)initWithTitle:(NSString *)title description:(NSString *)description image:(CommonNewImage * _Nullable)image date:(CommonKotlinx_datetimeLocalDate *)date __attribute__((swift_name("init(title:description:image:date:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonAddMealFormCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonNewImage * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonKotlinx_datetimeLocalDate *)component4 __attribute__((swift_name("component4()")));
- (CommonAddMealForm *)doCopyTitle:(NSString *)title description:(NSString *)description image:(CommonNewImage * _Nullable)image date:(CommonKotlinx_datetimeLocalDate *)date __attribute__((swift_name("doCopy(title:description:image:date:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) CommonNewImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddMealForm.Companion")))
@interface CommonAddMealFormCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonAddMealFormCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meal")))
@interface CommonMeal : CommonBase <CommonIMeal>
- (instancetype)initWithId:(NSString *)id title:(NSString *)title description:(NSString *)description image:(NSString * _Nullable)image lastCookingDate:(CommonKotlinx_datetimeLocalDate *)lastCookingDate __attribute__((swift_name("init(id:title:description:image:lastCookingDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonMealCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CommonKotlinx_datetimeLocalDate *)component5 __attribute__((swift_name("component5()")));
- (CommonMeal *)doCopyId:(NSString *)id title:(NSString *)title description:(NSString *)description image:(NSString * _Nullable)image lastCookingDate:(CommonKotlinx_datetimeLocalDate *)lastCookingDate __attribute__((swift_name("doCopy(id:title:description:image:lastCookingDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CommonMeal *)updateImageImage:(NSString * _Nullable)image __attribute__((swift_name("updateImage(image:)")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CommonKotlinx_datetimeLocalDate *lastCookingDate __attribute__((swift_name("lastCookingDate")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meal.Companion")))
@interface CommonMealCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonMealCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewImage")))
@interface CommonNewImage : CommonBase
- (instancetype)initWithData:(CommonKotlinByteArray *)data extension:(NSString *)extension __attribute__((swift_name("init(data:extension:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonNewImageCompanion *companion __attribute__((swift_name("companion")));
- (CommonKotlinByteArray *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonNewImage *)doCopyData:(CommonKotlinByteArray *)data extension:(NSString *)extension __attribute__((swift_name("doCopy(data:extension:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) NSString *extension __attribute__((swift_name("extension")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewImage.Companion")))
@interface CommonNewImageCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonNewImageCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface CommonKotlinx_datetimeLocalDate : CommonBase <CommonKotlinComparable>
- (instancetype)initWithYear:(int32_t)year month:(CommonKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CommonKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CommonKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) CommonKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

@interface CommonKotlinx_datetimeLocalDate (Extensions)
- (NSString *)toDisplayString __attribute__((swift_name("toDisplayString()")));
@property (readonly) BOOL isToday __attribute__((swift_name("isToday")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface CommonKoin_coreKoin : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (CommonKoin_coreScope *)createScopeT:(id<CommonKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<CommonKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (CommonKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (CommonKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<CommonKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (CommonKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (CommonKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<CommonKotlinLazy>)injectQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CommonKotlinLazy>)injectOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<CommonKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(CommonKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) CommonKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) CommonKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) CommonKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) CommonKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

@interface CommonKoin_coreKoin (Extensions)
@property (readonly) id<CommonMealRepository> mealRepository __attribute__((swift_name("mealRepository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Image")))
@interface CommonKtor_httpContentTypeImage : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)image __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKtor_httpContentTypeImage *shared __attribute__((swift_name("shared")));
@property (readonly) CommonKtor_httpContentType *Any __attribute__((swift_name("Any")));
@property (readonly) CommonKtor_httpContentType *GIF __attribute__((swift_name("GIF")));
@property (readonly) CommonKtor_httpContentType *JPEG __attribute__((swift_name("JPEG")));
@property (readonly) CommonKtor_httpContentType *PNG __attribute__((swift_name("PNG")));
@property (readonly) CommonKtor_httpContentType *SVG __attribute__((swift_name("SVG")));
@property (readonly) CommonKtor_httpContentType *XIcon __attribute__((swift_name("XIcon")));
@end;

@interface CommonKtor_httpContentTypeImage (Extensions)
- (CommonKtor_httpContentType *)parseKey:(NSString *)key __attribute__((swift_name("parse(key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface CommonKoinKt : CommonBase
+ (CommonKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@property (class, readonly) NSArray<CommonKoin_coreModule *> *commonModules __attribute__((swift_name("commonModules")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTimExtensionsKt")))
@interface CommonDateTimExtensionsKt : CommonBase
@property (class, readonly) CommonKotlinx_datetimeLocalDate *currentDate __attribute__((swift_name("currentDate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializationKt")))
@interface CommonSerializationKt : CommonBase
@property (class, readonly) CommonKotlinx_serialization_jsonJson *jsonConfig __attribute__((swift_name("jsonConfig")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonKotlinThrowable : CommonBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonKotlinException : CommonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonKotlinRuntimeException : CommonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonKotlinIllegalStateException : CommonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CommonKotlinCancellationException : CommonKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonKotlinUnit : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CommonKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CommonKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol CommonRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol CommonRuntimeTransactionWithoutReturn <CommonRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<CommonRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol CommonRuntimeTransactionWithReturn <CommonRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<CommonRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol CommonRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol CommonRuntimeSqlDriver <CommonRuntimeCloseable>
@required
- (CommonRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(CommonInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<CommonRuntimeSqlCursor>)executeQueryIdentifier:(CommonInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (CommonRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol CommonRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<CommonRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<CommonRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface CommonRuntimeQuery<__covariant RowType> : CommonBase
- (instancetype)initWithQueries:(NSMutableArray<CommonRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<CommonRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<CommonRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<CommonRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<CommonRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<CommonRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CommonKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CommonKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CommonKotlinx_serialization_coreKSerializer <CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonKotlinByteArray : CommonBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonByte *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonKotlinEnum<E> : CommonBase <CommonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface CommonKotlinx_datetimeMonth : CommonKotlinEnum<CommonKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CommonKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CommonKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CommonKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CommonKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CommonKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CommonKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CommonKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CommonKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CommonKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CommonKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CommonKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (CommonKotlinArray<CommonKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface CommonKotlinx_datetimeLocalDateCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (CommonKotlinx_datetimeLocalDate *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface CommonKotlinx_datetimeDayOfWeek : CommonKotlinEnum<CommonKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CommonKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (CommonKotlinArray<CommonKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface CommonKoin_coreScope : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<CommonKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (CommonKoin_coreScope *)doCopyScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (CommonKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (CommonKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<CommonKotlinLazy>)injectQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CommonKotlinLazy>)injectOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(CommonKotlinArray<CommonKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<CommonKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(CommonKotlinArray<CommonKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<CommonKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) CommonKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol CommonKoin_coreKoinComponent
@required
- (CommonKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol CommonKoin_coreKoinScopeComponent <CommonKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) CommonKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol CommonKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonKotlinKClass <CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface CommonKoin_coreParametersHolder : CommonBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (CommonKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (CommonKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol CommonKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface CommonKotlinLazyThreadSafetyMode : CommonKotlinEnum<CommonKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (CommonKotlinArray<CommonKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface CommonKoin_coreModule : CommonBase
- (instancetype)initWithCreatedAtStart:(BOOL)createdAtStart __attribute__((swift_name("init(createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSArray<CommonKoin_coreModule *> *)plusModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<CommonKoin_coreModule *> *)plusModule:(CommonKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<CommonKoin_coreQualifier>)qualifier scopeSet:(void (^)(CommonKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(CommonKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BOOL createdAtStart __attribute__((swift_name("createdAtStart")));
@property (readonly) CommonMutableSet<CommonKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface CommonKoin_coreLogger : CommonBase
- (instancetype)initWithLevel:(CommonKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(CommonKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(CommonKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(CommonKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property CommonKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface CommonKoin_coreInstanceRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(CommonKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) CommonKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, CommonKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface CommonKoin_corePropertyRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface CommonKoin_coreScopeRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) CommonKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<CommonKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CommonKtor_httpHeaderValueWithParameters : CommonBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CommonKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CommonKtor_httpContentType : CommonKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CommonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CommonKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CommonKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CommonKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CommonKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface CommonKoin_coreKoinApplication : CommonBase
@property (class, readonly, getter=companion) CommonKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (CommonKoin_coreKoinApplication *)loggerLogger:(CommonKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (CommonKoin_coreKoinApplication *)modulesModules:(CommonKotlinArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (CommonKoin_coreKoinApplication *)modulesModules_:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (CommonKoin_coreKoinApplication *)modulesModules__:(CommonKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (CommonKoin_coreKoinApplication *)printLoggerLevel:(CommonKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (CommonKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(CommonKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) CommonKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol CommonKotlinx_serialization_coreSerialFormat
@required
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol CommonKotlinx_serialization_coreStringFormat <CommonKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface CommonKotlinx_serialization_jsonJson : CommonBase <CommonKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(CommonKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(CommonKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(CommonKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (CommonKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (CommonKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) CommonKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonKotlinArray<T> : CommonBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CommonKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface CommonRuntimeTransacterTransaction : CommonBase <CommonRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) CommonRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol CommonRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(CommonKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(CommonDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(CommonLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol CommonRuntimeSqlCursor <CommonRuntimeCloseable>
@required
- (CommonKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (CommonDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (CommonLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol CommonRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CommonKotlinx_serialization_coreEncoder
@required
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CommonKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CommonKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CommonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CommonKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CommonKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CommonKotlinx_serialization_coreDecoder
@required
- (id<CommonKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CommonKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonKotlinByteIterator : CommonBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CommonKotlinEnumCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol CommonKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(CommonKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface CommonKoin_coreParametersHolderCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface CommonKoin_coreInstanceFactory<T> : CommonBase
- (instancetype)initWithBeanDefinition:(CommonKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CommonKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CommonKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) CommonKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CommonKotlinPair<__covariant A, __covariant B> : CommonBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (CommonKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface CommonKoin_coreScopeDSL : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier module:(CommonKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) CommonKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface CommonKoin_coreSingleInstanceFactory<T> : CommonKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(CommonKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CommonKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CommonKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface CommonKoin_coreLevel : CommonKotlinEnum<CommonKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CommonKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CommonKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) CommonKoin_coreLevel *none __attribute__((swift_name("none")));
+ (CommonKotlinArray<CommonKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface CommonKoin_coreScopeRegistryCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CommonKtor_httpHeaderValueParam : CommonBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface CommonKtor_httpHeaderValueWithParametersCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<CommonKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface CommonKtor_httpContentTypeCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (CommonKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CommonKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface CommonKoin_coreKoinApplicationCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (CommonKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CommonKotlinx_serialization_coreSerializersModule : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<CommonKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CommonKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CommonKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CommonKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<CommonKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface CommonKotlinx_serialization_jsonJsonConfiguration : CommonBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface CommonKotlinx_serialization_jsonJsonDefault : CommonKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(CommonKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(CommonKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CommonKotlinx_serialization_jsonJsonElement : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CommonKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CommonKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CommonKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CommonKotlinx_serialization_coreSerialKind : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CommonKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CommonKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonKotlinNothing : CommonBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface CommonKoin_coreBeanDefinition<T> : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier primaryType:(id<CommonKotlinKClass>)primaryType qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition kind:(CommonKoin_coreKind *)kind secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<CommonKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<CommonKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (CommonKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<CommonKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (CommonKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier primaryType:(id<CommonKotlinKClass>)primaryType qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition kind:(CommonKoin_coreKind *)kind secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<CommonKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CommonKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) CommonKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<CommonKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) id<CommonKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<CommonKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface CommonKoin_coreInstanceFactoryCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface CommonKoin_coreInstanceContext : CommonBase
- (instancetype)initWithKoin:(CommonKoin_coreKoin *)koin scope:(CommonKoin_coreScope *)scope parameters:(CommonKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) CommonKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) CommonKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CommonKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass provider:(id<CommonKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CommonKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass serializer:(id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CommonKotlinKClass>)baseClass actualClass:(id<CommonKotlinKClass>)actualClass actualSerializer:(id<CommonKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CommonKotlinKClass>)baseClass defaultSerializerProvider:(id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CommonKotlinx_serialization_jsonJsonElementCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface CommonKoin_coreKind : CommonKotlinEnum<CommonKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) CommonKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) CommonKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (CommonKotlinArray<CommonKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface CommonKoin_coreCallbacks<T> : CommonBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (CommonKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
