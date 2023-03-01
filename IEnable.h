#ifndef WARRIORARMY_ENABLE
#define WARRIORARMY_ENABLE

namespace Lifecycle {

	class IEnable {
	public:
		virtual void OnEnable() = 0;
	};

}

#endif // !WARRIORARMY_ENABLE