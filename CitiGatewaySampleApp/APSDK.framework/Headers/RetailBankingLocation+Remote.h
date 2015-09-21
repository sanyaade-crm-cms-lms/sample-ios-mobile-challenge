//
//  RetailBankingLocation+Remote.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingLocation+Remote
 @abstract Remote category for RetailBankingLocation class
 */

#import "RetailBankingLocation.h"

/*!
 @category RetailBankingLocation (Remote)
 @abstract Adds remote CRUD capabilities to RetailBankingLocation.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Remote) @/link methods.
 */ 
@interface RetailBankingLocation (Remote)

/*!
 @method allError:
 @abstract Fetches objects matching query scope "all" from remote server.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)allError:(NSError **)error;

/*!
 @method allWithContext:error:
 @abstract Fetches objects matching query scope "all" from remote server.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)allWithContext:(id)context error:(NSError **)error;

/*!
 @method allWithOffset:limit:error:
 @abstract Fetches objects matching query scope "all" from remote server, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)allWithOffset:(NSUInteger)offset limit:(NSUInteger)limit error:(NSError **)error;

/*!
 @method allWithOffset:limit:context:error:
 @abstract Fetches objects matching query scope "all" from remote server, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)allWithOffset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context error:(NSError **)error;

/*!
 @method exactMatchWithParams:error:
 @abstract Fetches objects matching query scope "exact_match" from remote server.
 @param params Scope parameter - params.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params error:(NSError **)error;

/*!
 @method exactMatchWithParams:context:error:
 @abstract Fetches objects matching query scope "exact_match" from remote server.
 @param params Scope parameter - params.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params context:(id)context error:(NSError **)error;

/*!
 @method exactMatchWithParams:offset:limit:error:
 @abstract Fetches objects matching query scope "exact_match" from remote server, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit error:(NSError **)error;

/*!
 @method exactMatchWithParams:offset:limit:context:error:
 @abstract Fetches objects matching query scope "exact_match" from remote server, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context error:(NSError **)error;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:error:
 @abstract Fetches objects matching query scope "locations" from remote server.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode error:(NSError **)error;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:context:error:
 @abstract Fetches objects matching query scope "locations" from remote server.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode context:(id)context error:(NSError **)error;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:offset:limit:error:
 @abstract Fetches objects matching query scope "locations" from remote server, with pagination.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode offset:(NSUInteger)offset limit:(NSUInteger)limit error:(NSError **)error;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:offset:limit:context:error:
 @abstract Fetches objects matching query scope "locations" from remote server, with pagination.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Array of objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode offset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context error:(NSError **)error;

/*!
 @method countError:
 @abstract Executes aggregate query "count" on remote server.
 @param error Error that has occured while executing the request, if any.
 @result Result of aggregate query.
 */
+ (NSNumber *)countError:(NSError **)error;

/*!
 @method countWithContext:error:
 @abstract Executes aggregate query "count" on remote server.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Result of aggregate query.
 */
+ (NSNumber *)countWithContext:(id)context error:(NSError **)error;

/*!
 @method countExactMatchWithParams:error:
 @abstract Executes aggregate query "count_exact_match" on remote server.
 @param params Scope parameter - params.
 @param error Error that has occured while executing the request, if any.
 @result Result of aggregate query.
 */
+ (NSNumber *)countExactMatchWithParams:(NSDictionary *)params error:(NSError **)error;

/*!
 @method countExactMatchWithParams:context:error:
 @abstract Executes aggregate query "count_exact_match" on remote server.
 @param params Scope parameter - params.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param error Error that has occured while executing the request, if any.
 @result Result of aggregate query.
 */
+ (NSNumber *)countExactMatchWithParams:(NSDictionary *)params context:(id)context error:(NSError **)error;

/*!
 @method allAsync:
 @abstract Returns cached objects matching query scope "all", then fetches fresh ones from remote server.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)allAsync:(APObjectsCallback)callback;

/*!
 @method allWithContext:async:
 @abstract Returns cached objects matching query scope "all", then fetches fresh ones from remote server.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)allWithContext:(id)context async:(APObjectsCallback)callback;

/*!
 @method allWithOffset:limit:async:
 @abstract Returns cached objects matching query scope "all", then fetches fresh ones from remote server, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)allWithOffset:(NSUInteger)offset limit:(NSUInteger)limit async:(APObjectsCallback)callback;

/*!
 @method allWithOffset:limit:context:async:
 @abstract Returns cached objects matching query scope "all", then fetches fresh ones from remote server, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)allWithOffset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context async:(APObjectsCallback)callback;

/*!
 @method exactMatchWithParams:async:
 @abstract Returns cached objects matching query scope "exact_match", then fetches fresh ones from remote server.
 @param params Scope parameter - params.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params async:(APObjectsCallback)callback;

/*!
 @method exactMatchWithParams:context:async:
 @abstract Returns cached objects matching query scope "exact_match", then fetches fresh ones from remote server.
 @param params Scope parameter - params.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params context:(id)context async:(APObjectsCallback)callback;

/*!
 @method exactMatchWithParams:offset:limit:async:
 @abstract Returns cached objects matching query scope "exact_match", then fetches fresh ones from remote server, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit async:(APObjectsCallback)callback;

/*!
 @method exactMatchWithParams:offset:limit:context:async:
 @abstract Returns cached objects matching query scope "exact_match", then fetches fresh ones from remote server, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)exactMatchWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context async:(APObjectsCallback)callback;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:async:
 @abstract Returns cached objects matching query scope "locations", then fetches fresh ones from remote server.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode async:(APObjectsCallback)callback;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:context:async:
 @abstract Returns cached objects matching query scope "locations", then fetches fresh ones from remote server.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode context:(id)context async:(APObjectsCallback)callback;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:offset:limit:async:
 @abstract Returns cached objects matching query scope "locations", then fetches fresh ones from remote server, with pagination.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode offset:(NSUInteger)offset limit:(NSUInteger)limit async:(APObjectsCallback)callback;

/*!
 @method locationsWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:offset:limit:context:async:
 @abstract Returns cached objects matching query scope "locations", then fetches fresh ones from remote server, with pagination.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 @result Array of cached objects.
 */
+ (NSArray *)locationsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode offset:(NSUInteger)offset limit:(NSUInteger)limit context:(id)context async:(APObjectsCallback)callback;

/*!
 @method countAsync:
 @abstract Executes aggregate query "count" on remote server.
 @param callback Callback to be executed when operation completes.
 */
+ (void)countAsync:(APObjectsCallback)callback;

/*!
 @method countWithContext:async:
 @abstract Executes aggregate query "count" on remote server.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 */
+ (void)countWithContext:(id)context async:(APObjectsCallback)callback;

/*!
 @method countExactMatchWithParams:async:
 @abstract Executes aggregate query "count_exact_match" on remote server.
 @param params Scope parameter - params.
 @param callback Callback to be executed when operation completes.
 */
+ (void)countExactMatchWithParams:(NSDictionary *)params async:(APObjectsCallback)callback;

/*!
 @method countExactMatchWithParams:context:async:
 @abstract Executes aggregate query "count_exact_match" on remote server.
 @param params Scope parameter - params.
 @param context Object instance or NSDictionary of ‘string’ to ‘object instance’ mapping for use with interpolation of headers, request URL, or previously defined variable at SDK creation.  For more details on the use of contexts, see the discussion section in @link //apple_ref/occ/cat/APObject(Remote) @/link.
 @param callback Callback to be executed when operation completes.
 */
+ (void)countExactMatchWithParams:(NSDictionary *)params context:(id)context async:(APObjectsCallback)callback;

@end
