#ifndef WARRIORARMY_DISABLE
#define WARRIORARMY_DISABLE

namespace Lifecycle {

	class IDisable {
	public:
		virtual void OnDisable() = 0;
	};

}

#endif // !WARRIORARMY_DISABLE